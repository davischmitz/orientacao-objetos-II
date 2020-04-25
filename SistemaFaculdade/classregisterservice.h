#ifndef CLASSREGISTERSERVICE_H
#define CLASSREGISTERSERVICE_H

#include "course.h"
#include "subject.h"
#include "class.h"
#include <QList>

using namespace std;

class ClassRegisterService {

public:
    ClassRegisterService();

    void registerToSubject(QList<Course> *courses, QString, Class);
};

#endif // CLASSREGISTERSERVICE_H
