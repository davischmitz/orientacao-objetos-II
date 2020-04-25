#ifndef ACCOUNTSERVICE_H
#define ACCOUNTSERVICE_H

#include "account.h"
#include "accountcontainer.h"

#include <QFile>


class AccountService
{
public:
    AccountService();

    void save(AccountContainer, QFile *);
    Account get(QFile *);
    Account mapContainerToEntity(AccountContainer);
    void updateBalance();
};

#endif // ACCOUNTSERVICE_H
