#include "person.h"

Person::Person() {}

QString Person::getName() {
    return name;
}

QString Person::getBirthDate() {
    return birthDate;
}

QString Person::getEmail() {
    return email;
}

QString Person::getAddress() {
    return address;
}

QString Person::getPhone() {
    return phone;
}

QString Person::getCpf() {
    return cpf;
}

QString Person::getRg() {
    return rg;
}

void Person::setName(QString name) {
    this->name = name;
}

void Person::setBirthDate(QString birthday) {
    this->birthDate = birthday;
}

void Person::setEmail(QString email) {
    this->email = email;
}

void Person::setAddress(QString address) {
    this->address = address;
}

void Person::setPhone(QString phone) {
    this->phone = phone;
}

void Person::setCpf(QString cpf) {
    this->cpf = cpf;
}

void Person::setRg(QString rg) {
    this->rg = rg;
}
