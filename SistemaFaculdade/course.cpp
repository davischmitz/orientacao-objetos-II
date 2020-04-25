#include "course.h"
#include <QDebug>

Course::Course() {}

Course::Course(QString code, QString name, QString description, int workload, QString modality) {
    setCode(code);
    setName(name);
    setDescription(description);
    setWorkload(workload);
    setModality(modality);
}

QString Course::getCode() {
    return code;
}

QString Course::getDescription() {
    return description;
}

QString Course::getName() {
    return name;
}

int Course::getWorkload() {
    return workload;
}

CourseModalityEnum Course::getModality() {
    return modality;
}

QList<Student> Course::getStudents() {
    return students;
}

QList<Teacher> Course::getTeachers() {
    return teachers;
}

QList<Subject> Course::getSubjects() {
    return subjects;
}

void Course::setCode(QString code) {
    this->code = code;
}

void Course::setDescription(QString description) {
    this->description = description;
}

void Course::setName(QString name) {
    this->name = name;
}

void Course::setWorkload(int workload) {
    this->workload = workload;
}

void Course::setModality(QString modality) {
    this->modality = CourseModality::modalityMap[modality];
}

void Course::registerStudent(Student student) {
    students.append(student);
}

void Course::registerTeacher(Teacher teacher) {
    teachers.append(teacher);
}

void Course::registerSubject(Subject subject) {
    subjects.append(subject);
}
