#include "student.h"
#include <iostream>


Student::Student() {}

Student::Student(QString name, QString email, QString address, QString cpf, QString rg) {
   setName(name);
   setEmail(email);
   setAddress(address);
   setCpf(cpf);
   setRg(rg);
}

QString Student::getRegistration() {
    return registration;
}

QString Student::getStartDate() {
    return startDate;
}

StudentStatusEnum Student::getStatus() {
    return status;
}

void Student::printData() {
    cout << "Nome: " << getName().toStdString() << endl
         << "Data Nascimento: " << getBirthDate().toStdString() << endl
         << "Email: " << getEmail().toStdString() << endl
         << "Endereço: " << getAddress().toStdString() << endl
         << "Telefone: " << getPhone().toStdString() << endl
         << "CPF: " << getCpf().toStdString() << endl
         << "RG: " << getRg().toStdString() << endl;
}
