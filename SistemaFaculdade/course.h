#ifndef COURSE_H
#define COURSE_H
#include <QList>
#include <QString>
#include "coursemodalityenum.h"
#include "student.h"
#include "subject.h"
#include "teacher.h"

using namespace std;

class Course {

private:
    QString code;
    QString description;
    QString name;
    int workload;
    CourseModalityEnum modality;
    QList<Student> students;
    QList<Teacher> teachers;

public:
    Course();
    Course(QString, QString, QString, int, QString);

    QList<Subject> subjects;

    QString getCode();
    QString getDescription();
    QString getName();
    int getWorkload();
    CourseModalityEnum getModality();
    QList<Student> getStudents();
    QList<Teacher> getTeachers();
    QList<Subject> getSubjects();

    void setCode(QString);
    void setDescription(QString);
    void setName(QString);
    void setWorkload(int);
    void setModality(QString);

    void registerStudent(Student);
    void registerTeacher(Teacher);
    void registerSubject(Subject);

};

#endif // COURSE_H
