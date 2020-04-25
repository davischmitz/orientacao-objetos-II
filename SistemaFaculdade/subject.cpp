#include "subject.h"

Subject::Subject() {}

Subject::Subject(QString code, QString name, QString description, QString semester, QString program, QString bibliography) {
    setCode(code);
    setName(name);
    setDescription(description);
    setSemester(semester);
    setProgram(program);
    setBibliography(bibliography);
}

QString Subject::getCode() {
    return code;
}

QString Subject::getName() {
    return name;
}

QString Subject::getDescription() {
    return description;
}

QString Subject::getSemester() {
    return semester;
}

QString Subject::getProgram() {
    return program;
}

QString Subject::getBibliography() {
    return bibliography;
}

QList<Class> Subject::getClasses() {
    return classes;
}

void Subject::registerClass(Class c) {
    classes.append(c);
}

void Subject::setCode(QString code) {
    this->code = code;
}

void Subject::setName(QString name) {
    this->name = name;
}

void Subject::setDescription(QString description)  {
    this->description = description;
}

void Subject::setSemester(QString semester) {
    this->semester = semester;
}

void Subject::setProgram(QString program) {
    this->program = program;
}

void Subject::setBibliography(QString bibliography) {
    this->bibliography = bibliography;
}


