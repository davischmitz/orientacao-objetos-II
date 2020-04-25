#ifndef TRANSACTION_H
#define TRANSACTION_H
#include <QString>
#include <QChar>

class Transaction
{
private:
    QString accountNumber;
    QChar type;
    double value;

public:
    Transaction();
    ~Transaction();

    void setAccountNumber(QString);
    QString getAccountNumber();

    void setType(QChar);
    QChar getType();

    void setValue(double);
    double getValue();
};

#endif
