#include "accountservice.h"

#include <QDataStream>

AccountService::AccountService() {}

Account AccountService::mapContainerToEntity(AccountContainer container) {
    return Account(container.number, container.customerName, container.balance);
}

void AccountService::save(AccountContainer account, QFile *f) {

    QDataStream StreamBinario(f);

    char BufferBytes[sizeof(account)];

    memcpy(BufferBytes, &account, sizeof(account));

    StreamBinario.writeRawData(BufferBytes,sizeof(account));

    f->close();
}

Account AccountService::get(QFile *f) {

    AccountContainer container;

    QDataStream StreamBinario(f);

    char BufferBytes[sizeof(container)];

    StreamBinario.readRawData(BufferBytes,sizeof(container));

    memcpy(&container, BufferBytes, sizeof(container));

    f->close();

    return mapContainerToEntity(container);
}
