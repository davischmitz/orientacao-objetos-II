#ifndef COLLEGE_H
#define COLLEGE_H
#include "course.h"

#include <QList>
#include <QString>

using namespace std;

class College {

private:
    QString name;
    QString address;
    QString cnpj;

public:
    College();
    QList<Course> courses;

    QString getName();
    QString getAddress();
    QString getCnpj();
    QList<Course> getCourses();

    void setName(QString);
    void setAddress(QString);
    void setCnpj(QString);

    void registerData(QString, QString, QString);

    void addCourse(Course);
};

#endif // COLLEGE_H
