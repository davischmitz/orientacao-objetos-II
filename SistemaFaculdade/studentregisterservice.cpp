#include "studentregisterservice.h"

StudentRegisterService::StudentRegisterService() {}

void StudentRegisterService::registerToClass(QList<Course> *courses, QString course, QString subject , QString clazz, Student student) {
    for (int i = 0; i < courses->size(); i++) {
        if ((*courses)[i].getName() == course) {
            this->registerToCourse(&(*courses)[i], student);

            for (int j = 0; j < (*courses)[i].subjects.size(); j++) {
                if ((*courses)[i].subjects[j].getName() == subject) {

                    for (int k = 0; k < (*courses)[i].subjects[j].classes.size(); k++) {
                        if ((*courses)[i].subjects[j].classes[k].getCode() == clazz) {
                            (*courses)[i].subjects[j].classes[k].registerStudent(student);
                        }
                    }
                }
            }
        }
    }
}

void StudentRegisterService::registerToCourse(Course *course, Student student) {
    course->registerStudent(student);
}
