#include "transaction.h"
#include <QString>
#include <QChar>

Transaction::Transaction() {}

Transaction::~Transaction() {}

void Transaction::setAccountNumber(QString number) {
    this->accountNumber = number;
}

QString Transaction::getAccountNumber() {
    return accountNumber;
}

void Transaction::setType(QChar type) {
    this->type = type;
}

QChar Transaction::getType() {
    return type;
}

void Transaction::setValue(double value) {
    this->value = value;
}

double Transaction::getValue() {
    return value;
}
