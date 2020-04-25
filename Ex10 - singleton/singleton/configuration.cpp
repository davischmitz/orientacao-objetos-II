#include "configuration.h"

configuration* configuration::instance = nullptr;

configuration::configuration() {}

configuration* configuration::getInstance() {
    if (!instance) {
        instance = new configuration();
    }

    return instance;
}

void configuration::setIp(QString ip) {
    this->ip = ip;
}

QString configuration::getIp() {
    return ip;
}

void configuration::setPort(int port) {
    this->port = port;
}

int configuration::getPort() {
    return port;
}

void configuration::setUser(QString user) {
    this->user = user;
}

QString configuration::getUser() {
    return user;
}

void configuration::setPassword(QString password) {
    this->password = password;
}

QString configuration::getPassword() {
    return password;
}
