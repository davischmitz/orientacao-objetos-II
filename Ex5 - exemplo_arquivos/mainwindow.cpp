#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QTextStream>
#include <QString>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::checkIfFileExists() {
    if( !f.exists() ) {
        ui->textEdit->setText("Arquivo não Existe.");
        return;
    }
}

void MainWindow::checkFilePermissions() {
    if( !f.open(QIODevice::ReadWrite | QIODevice::Text) ){
         ui->textEdit->setText( "Sem permissão para Abrir o arquivo.");
         return;
    }
}

void MainWindow::on_pushButton_clicked() {

   f.setFileName(ui->lineEdit->text());

   checkIfFileExists();

   checkFilePermissions();

   ui->textEdit->setText(f.readAll());
   f.close();
   return;
}

void MainWindow::on_btn_salvar_clicked() {
    f.setFileName(ui->lineEdit->text());

    checkIfFileExists();

    checkFilePermissions();

    QTextStream ts( &f );
    QString text = ui->textEdit->toPlainText();

    ts << text << endl;
    f.close();
    return;
}
