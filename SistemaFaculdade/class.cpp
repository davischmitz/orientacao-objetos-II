#include "class.h"

Class::Class() {}

Class::Class(QString code, int maxStudents, QString shift) {
    setCode(code);
    setMaxStudents(maxStudents);
    setShift(shift);
}

void Class::registerStudent(Student student) {
    if (students.size() < maxStudents) {
        students.append(student);
    }
}

void Class::registerTeacher(Teacher teacher) {
    this->teacher = teacher;
}

QString Class::getCode() {
    return code;
}

ClassShiftEnum Class::getShift() {
    return shift;
}

int Class::getMaxStudents() {
    return maxStudents;
}

Teacher Class::getTeacher() {
    return teacher;
}

QList<Student> Class::getStudents() {
    return students;
}

void Class::setCode(QString code) {
    this->code = code;
}

void Class::setShift(QString shift) {
    this->shift = ClassShift::shiftMap[shift];
}

void Class::setMaxStudents(int max) {
    this->maxStudents = max;
}

void Class::setTeacher(Teacher teacher) {
    this->teacher = teacher;
}

