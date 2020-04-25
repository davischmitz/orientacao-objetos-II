#ifndef PERSON_H
#define PERSON_H
#include <QString>

using namespace std;

class Person {

private:
    QString name;
    QString birthDate;
    QString email;
    QString address;
    QString phone;
    QString cpf;
    QString rg;

public:
    Person();

    QString getName();
    QString getBirthDate();
    QString getEmail();
    QString getAddress();
    QString getPhone();
    QString getCpf();
    QString getRg();

    void setName(QString);
    void setBirthDate(QString);
    void setEmail(QString);
    void setAddress(QString);
    void setPhone(QString);
    void setCpf(QString);
    void setRg(QString);

    virtual void printData() = 0;
};

#endif // PERSON_H
