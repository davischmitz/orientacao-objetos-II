#ifndef TRANSACTIONSERVICE_H
#define TRANSACTIONSERVICE_H

#include "transaction.h"

#include <QFile>
#include <QList>


class TransactionService
{

public:
    TransactionService();

    QList<Transaction> getFromRow(QFile *);
};

#endif // TRANSACTIONSERVICE_H
