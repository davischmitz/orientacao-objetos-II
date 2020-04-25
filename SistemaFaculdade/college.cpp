#include "college.h"

College::College() {}

QString College::getName() {
    return name;
}

QString College::getAddress() {
    return address;
}

QString College::getCnpj() {
    return cnpj;
}

QList<Course> College::getCourses() {
    return courses;
}

void College::setName(QString name) {
    this->name = name;
}

void College::setAddress(QString address) {
    this->address = address;
}

void College::setCnpj(QString cnpj) {
    this->cnpj = cnpj;
}

void College::registerData(QString name, QString address, QString cnpj) {
    setName(name);
    setAddress(address);
    setCnpj(cnpj);
}

void College::addCourse(Course course) {
    courses.append(course);
}
