#ifndef TEACHER_H
#define TEACHER_H

#include "person.h"
#include <QString>
#include "contracttypeenum.h"

using namespace std;

class Teacher: public Person {

private:
    QString registration;
    ContractTypeEnum contractType;

public:
    Teacher();
    Teacher(QString, QString, QString,  QString, QString, QString);

    QString getRegistration();
    ContractTypeEnum getContractType();

    void setRegistration(QString);
    void setContractType(QString);

    void printData();
};

#endif // TEACHER_H
