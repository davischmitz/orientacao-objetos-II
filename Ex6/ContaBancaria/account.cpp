#include "account.h"
#include <QString>

Account::Account() {}

Account::Account(QString number, QString customerName, double balance) {
    this->number = number;
    this->customerName = customerName;
    this->balance = balance;
}

Account::~Account() {}

void Account::setNumber(QString number) {
    this->number = number;
}

QString Account::getNumber() {
    return number;
}

void Account::setCustomerName(QString name) {
    this->customerName = name;
}

QString Account::getCustomerName() {
    return customerName;
}

void Account::setBalance(double balance) {
    this->balance = balance;
}

double Account::getBalance() {
    return balance;
}

void Account::deposit(double value) {
    setBalance(getBalance() + value);
}

void Account::withdraw(double value) {
    setBalance(getBalance() - value);
}
