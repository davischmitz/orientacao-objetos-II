#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QString>
#include <QMessageBox>
#include <QDataStream>
#include <QFileInfo>
#include <QTextStream>
#include "accountcontainer.h"
#include "transaction.h"
#include <QList>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow() {
    delete ui;
}

QString MainWindow::getFileName(QString type) {
    QString file = QFileDialog::getOpenFileName(
                    this,
                    tr("Open file"),
                    "/home/davi/unisinos/repository/pooii/Ex6/build-ContaBancaria-Desktop_Qt_5_9_2_GCC_64bit-Debug",
                    type);
    QFileInfo fileInfo(file);
    return fileInfo.fileName();
}

void MainWindow::clearAlerts() {
    ui->alerts->clear();
}

void MainWindow::checkFilePermissions(QFile *f) {
    if( !f->open(QIODevice::ReadWrite) ){
         ui->alerts->setText( "Sem permissão para Abrir o arquivo.");
         return;
    }
}

void MainWindow::checkIfFileExists(QFile *f) {
    if(!f->exists()) {
        ui->alerts->setText("Arquivo não Existe.");
        return;
    }
}

void MainWindow::on_openFileTransactions_clicked() {
    ui->transactions_file->setText(getFileName("*.txt"));
}

void MainWindow::on_openFileAccounts_clicked() {
   ui->accounts_file->setText(getFileName("*.bin"));
}

void MainWindow::on_accountRegister_clicked() {
    clearAlerts();

    AccountContainer account;

    QFile f(ui->accounts_file->text());

    checkIfFileExists(&f);

    checkFilePermissions(&f);

    account.number = ui->account_number->text();
    account.customerName = ui->account_customer->text();
    account.balance = ui->account_balance->text().toDouble();

    accountService.save(account, &f);

    ui->alerts->setText("Sucesso ao salvar.");
}

void MainWindow::on_listAccounts_clicked() {
    clearAlerts();

    QFile f(ui->accounts_file->text());

    checkIfFileExists(&f);

    checkFilePermissions(&f);

    Account account = accountService.get(&f);

    ui->accountData->setText(QString("Conta: %1 Cliente: %2 Saldo: %3").arg(account.getNumber()).arg(account.getCustomerName()).arg(account.getBalance()));
}

void MainWindow::on_updateBalance_clicked() {
    QFile fTransactions(ui->transactions_file->text());
    checkIfFileExists(&fTransactions);
    checkFilePermissions(&fTransactions);

    QFile fAccounts(ui->accounts_file->text());
    checkIfFileExists(&fAccounts);
    checkFilePermissions(&fAccounts);

    Account account = accountService.get(&fAccounts);
    QList<Transaction> transactionList = transactionService.getFromRow(&fTransactions);

    ui->accountData->setText(QString("Conta: %1 Cliente: %2 Saldo: %3 ").arg(account.getNumber()).arg(account.getCustomerName()).arg(account.getBalance()));

    foreach (Transaction transaction, transactionList) {
        if (transaction.getAccountNumber() == account.getNumber()) {
            if (transaction.getType() == 'D') {
                account.deposit(transaction.getValue());
            } else if (transaction.getType() == 'S') {
                account.withdraw(transaction.getValue());
            }

            ui->accountData->append(QString("Conta: %1 Cliente: %2 Saldo: %3 ").arg(account.getNumber()).arg(account.getCustomerName()).arg(account.getBalance()));
        }
    }
    fTransactions.close();
}
