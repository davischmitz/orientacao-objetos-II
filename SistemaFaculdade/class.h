#ifndef CLASS_H
#define CLASS_H
#include <QList>
#include <QString>
#include "classshiftenum.h"
#include "student.h"
#include "teacher.h"

using namespace std;

class Class {

private:
    QString code;
    ClassShiftEnum shift;
    int maxStudents;
    Teacher teacher;
    QList<Student> students;

public:
    Class();
    Class(QString, int, QString);

    void registerStudent(Student);
    void registerTeacher(Teacher);

    QString getCode();
    ClassShiftEnum getShift();
    int getMaxStudents();
    Teacher getTeacher();
    QList<Student> getStudents();

    void setCode(QString);
    void setShift(QString);
    void setMaxStudents(int);
    void setTeacher(Teacher);
};

#endif // CLASS_H
