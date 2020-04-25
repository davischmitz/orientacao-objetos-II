#include "teacher.h"
#include <iostream>

Teacher::Teacher() {}

Teacher::Teacher(QString name, QString email, QString address, QString cpf, QString rg, QString contractType) {
    setName(name);
    setEmail(email);
    setAddress(address);
    setCpf(cpf);
    setRg(rg);
    setContractType(contractType);
}

QString Teacher::getRegistration() {
    return registration;
}

ContractTypeEnum Teacher::getContractType() {
    return contractType;
}

void Teacher::setRegistration(QString registration) {
    this->registration = registration;
}

void Teacher::setContractType(QString contractType) {
    this->contractType = ContractType::contractTypeMap[contractType];
}

void Teacher::printData() {
    cout << "Nome: " << getName().toStdString() << endl
         << "Data Nascimento: " << getBirthDate().toStdString() << endl
         << "Email: " << getEmail().toStdString() << endl
         << "Endereço: " << getAddress().toStdString() << endl
         << "Telefone: " << getPhone().toStdString() << endl
         << "CPF: " << getCpf().toStdString() << endl
         << "RG: " << getRg().toStdString() << endl;
}
