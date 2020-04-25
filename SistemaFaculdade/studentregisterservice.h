#ifndef STUDENTREGISTERSERVICE_H
#define STUDENTREGISTERSERVICE_H

#include "course.h"
#include "student.h"



class StudentRegisterService {

public:
    StudentRegisterService();

    void registerToClass(QList<Course> *courses, QString, QString, QString, Student);
    void registerToCourse(Course*, Student);
};

#endif // STUDENTREGISTERSERVICE_H
