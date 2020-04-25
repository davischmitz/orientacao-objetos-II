#include "classregisterservice.h"
#include <QDebug>

ClassRegisterService::ClassRegisterService() {}

void ClassRegisterService::registerToSubject(QList<Course> *courses, QString subjectName, Class clazz) {
    for (int i = 0; i < courses->size(); i++) {
        for (int j = 0; j < (*courses)[i].subjects.size(); j++) {
            if ((*courses)[i].subjects[j].getName() == subjectName) {
                (*courses)[i].subjects[j].registerClass(clazz);
            }
        }
    }
}
