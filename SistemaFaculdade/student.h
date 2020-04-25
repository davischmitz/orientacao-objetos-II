#ifndef STUDENT_H
#define STUDENT_H
#include <QString>
#include "person.h"
#include "studentstatusenum.h"

using namespace std;

class Student: public Person {

private:
    QString registration;
    QString startDate;
    StudentStatusEnum status;

public:
    Student();
    Student(QString, QString, QString, QString, QString);

    QString getRegistration();
    QString getStartDate();
    StudentStatusEnum getStatus();

    void setRegistration(QString);
    void setStartDate(QString);
    void setStatus(StudentStatusEnum);

    void printData();
};

#endif // STUDENT_H
