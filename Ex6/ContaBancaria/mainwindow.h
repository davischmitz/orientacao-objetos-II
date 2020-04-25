#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "accountservice.h"
#include "transactionservice.h"

#include <QMainWindow>
#include <QString>
#include <QFile>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_openFileTransactions_clicked();

    void on_openFileAccounts_clicked();

    void on_accountRegister_clicked();

    void on_listAccounts_clicked();

    void on_updateBalance_clicked();

private:

    AccountService accountService;

    TransactionService transactionService;

    QString getFileName(QString);

    void clearAlerts();

    void checkFilePermissions(QFile *);

    void checkIfFileExists(QFile *);

    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
