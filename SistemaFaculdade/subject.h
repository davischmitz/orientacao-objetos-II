#ifndef SUBJECT_H
#define SUBJECT_H
#include "class.h"

#include <QList>
#include <QString>

using namespace std;

class Subject {

private:
    QString code;
    QString name;
    QString description;
    QString semester;
    QString program;
    QString bibliography;

public:
    Subject();
    Subject(QString, QString, QString, QString, QString, QString);

    QList<Class> classes;

    QString getCode();
    QString getName();
    QString getDescription();
    QString getSemester();
    QString getProgram();
    QString getBibliography();
    QList<Class> getClasses();

    void registerClass(Class);

    void setCode(QString);
    void setName(QString);
    void setDescription(QString);
    void setSemester(QString);
    void setProgram(QString);
    void setBibliography(QString);
};

#endif // SUBJECT_H
