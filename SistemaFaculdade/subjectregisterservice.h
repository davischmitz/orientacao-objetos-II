#ifndef SUBJECTREGISTERSERVICE_H
#define SUBJECTREGISTERSERVICE_H

#include "college.h"
#include "course.h"
#include "subject.h"

#include <QList>
#include <QDebug>
#include <QString>

using namespace std;

class SubjectRegisterService {

public:
    SubjectRegisterService();

    void registerToCourse(QList<Course> *courses, QString, Subject);
};

#endif // SUBJECTREGISTERSERVICE_H
