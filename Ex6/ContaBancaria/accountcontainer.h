#ifndef ACCOUNTCONTAINER_H
#define ACCOUNTCONTAINER_H
#include <QString>

class AccountContainer
{

public:
    QString number;
    QString customerName;
    double balance;

    AccountContainer();
    ~AccountContainer();
};

#endif // ACCOUNTCONTAINER_H
