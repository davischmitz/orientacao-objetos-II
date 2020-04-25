#include "subjectregisterservice.h"

SubjectRegisterService::SubjectRegisterService() {}

void SubjectRegisterService::registerToCourse(QList<Course> *courses, QString courseName, Subject subject) {
    for (int i = 0; i < courses->size(); i++) {
        if ((*courses)[i].getName() == courseName) {
            (*courses)[i].registerSubject(subject);
        }
    }
}
