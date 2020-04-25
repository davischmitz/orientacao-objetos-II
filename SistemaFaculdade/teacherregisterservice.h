#ifndef TEACHERREGISTERSERVICE_H
#define TEACHERREGISTERSERVICE_H

#include "course.h"

#include <QList>
#include <QString>



class TeacherRegisterService {

public:
    TeacherRegisterService();

    void registerToClass(QList<Course> *courses, QString, QString, QString, Teacher);
    void registerToCourse(Course*, Teacher);
};

#endif // TEACHERREGISTERSERVICE_H
