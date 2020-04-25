#include "transactionservice.h"
#include <QByteArray>
#include <QTextStream>
#include <QList>

TransactionService::TransactionService() {}

QList<Transaction> TransactionService::getFromRow(QFile *f) {

    QTextStream in(f);
    const auto size = f->size();
    QList<Transaction> transactionList;

    while (!in.atEnd()) {
      QString transactionRow = in.readLine();

      Transaction transaction;

      QStringRef accountNumber(&transactionRow, 0, 5);
      QStringRef type(&transactionRow, 5, 1);
      QStringRef value(&transactionRow, 6, transactionRow.size() - 6);

      transaction.setAccountNumber(accountNumber.toString());
      transaction.setType(type.toString().at(0));
      transaction.setValue(value.toDouble());

      transactionList.append(transaction);
    }

    return transactionList;
}
