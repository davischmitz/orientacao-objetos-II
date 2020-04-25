#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::setData(College college) {
    ui->textEdit->clear();
    QString data;

    this->appendCollegeData(&data, college);

    for (Course course : college.getCourses()) {
        this->appendCourseData(&data, course);
    }

    ui->textEdit->setText(data);
}

void Dialog::appendCollegeData(QString *data, College college) {
    *data += QString::fromStdString("Faculdade: \n") +
             QString::fromStdString("\nNome: ") + college.getName() +
             QString::fromStdString("\nEndereço: ") + college.getAddress() +
             QString::fromStdString("\nCNPJ: ") + college.getCnpj();
}

void Dialog::appendCourseData(QString *data, Course course) {
    *data += QString::fromStdString("\n\n- Curso: ") +
             QString::fromStdString("\n  Código: ") + course.getCode() +
             QString::fromStdString("\n  Nome: ") + course.getName() +
             QString::fromStdString("\n  Descrição: ") + course.getDescription() +
             QString::fromStdString("\n  Carga horária: ") + QString::number(course.getWorkload()) + QString::fromStdString("h");
             QString::fromStdString("\n");

    for (Subject subject : course.getSubjects()) {
        this->appendSubjectData(data, subject);
    }
}

void Dialog::appendSubjectData(QString *data, Subject subject) {
    *data += QString::fromStdString("\n\n-- Disciplina: ") +
             QString::fromStdString("\n   Nome: ") + subject.getName() +
             QString::fromStdString("\n   Código: ") + subject.getCode() +
             QString::fromStdString("\n   Descrição: ") + subject.getDescription();
    for (Class clazz : subject.getClasses()) {
        this->appendClassData(data, clazz);
    }
}

void Dialog::appendClassData(QString *data, Class clazz) {
    *data += QString::fromStdString("\n\n-- Turma: ") +
            QString::fromStdString("\n   Código: ") + clazz.getCode() +
            QString::fromStdString("\n   Máximo de alunos: ") + QString::number(clazz.getMaxStudents());
    this->appendTeacherData(data, clazz.getTeacher());
    for (Student student : clazz.getStudents()) {
        this->appendStudentData(data, student);
    }
}

void Dialog::appendStudentData(QString *data, Student student) {
    *data += QString::fromStdString("\n\n-- Aluno: ") +
             QString::fromStdString("\n   Nome: ") + student.getName() +
             QString::fromStdString("\n   Email: ") + student.getEmail() +
             QString::fromStdString("\n   Endereço: ") + student.getAddress() +
             QString::fromStdString("\n   CPF: ") + student.getCpf() +
             QString::fromStdString("\n   RG: ") + student.getRg();
}

void Dialog::appendTeacherData(QString *data, Teacher teacher) {
    *data += QString::fromStdString("\n\n-- Professor: ") +
             QString::fromStdString("\n   Nome: ") + teacher.getName() +
             QString::fromStdString("\n   Email: ") + teacher.getEmail() +
             QString::fromStdString("\n   Endereço: ") + teacher.getAddress() +
             QString::fromStdString("\n   CPF: ") + teacher.getCpf() +
             QString::fromStdString("\n   RG: ") + teacher.getRg();
}

