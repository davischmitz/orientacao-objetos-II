#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <QString>

class Account
{

private:
    QString number;
    QString customerName;
    double balance;

public:
    Account();
    Account(QString, QString, double);
    ~Account();

    void setNumber(QString);
    QString getNumber();

    void setCustomerName(QString);
    QString getCustomerName();

    void setBalance(double);
    double getBalance();

    void deposit(double);

    void withdraw(double);
};

#endif
