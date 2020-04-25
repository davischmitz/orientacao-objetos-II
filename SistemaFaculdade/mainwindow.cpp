#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->updateStaticComboBoxes();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updateStaticComboBoxes() {
    for (const auto& keyValue : CourseModality::modalityMap) {
        ui->course_modality_comboBox->addItem(keyValue.first);
    }
    for (const auto& keyValue : ClassShift::shiftMap) {
        ui->class_shift_comboBox->addItem(keyValue.first);
    }
    for (const auto& keyValue : ContractType::contractTypeMap) {
        ui->teacher_contract_combobox->addItem(keyValue.first);
    }
}

void MainWindow::updateCourseComboBox() {
    ui->subject_course_comboBox->clear();
    ui->teacher_course_combobox->clear();
    ui->student_course_combobox->clear();
    for (Course course : college.getCourses()) {
        ui->subject_course_comboBox->addItem(course.getName());
        ui->teacher_course_combobox->addItem(course.getName());
        ui->student_course_combobox->addItem(course.getName());
    }
}

void MainWindow::updateSubjectComboBox() {
    ui->class_subject_comboBox->clear();
    ui->teacher_subject_combobox->clear();
    ui->student_subject_combobox->clear();
    for (Course course : college.getCourses()) {
        for (Subject subject : course.getSubjects()) {
            ui->class_subject_comboBox->addItem(subject.getName());
            ui->teacher_subject_combobox->addItem(subject.getName());
            ui->student_subject_combobox->addItem(subject.getName());
        }
    }
}

void MainWindow::updateClassComboBox() {
    ui->teacher_class_combobox->clear();
    ui->student_class_combobox->clear();
    for (Course course : college.getCourses()) {
        for (Subject subject : course.getSubjects()) {
            for (Class clazz : subject.getClasses()) {
                ui->teacher_class_combobox->addItem(clazz.getCode());
                ui->student_class_combobox->addItem(clazz.getCode());
            }
        }
    }
}

void MainWindow::on_college_register_btn_clicked() {
    QString name = ui->college_name->text();
    QString address = ui->college_address->text();
    QString cnpj = ui->college_cnpj->text();
    college.registerData(name, address, cnpj);
}

void MainWindow::on_course_register_btn_clicked() {
    QString code = ui->course_code->text();
    QString name = ui->course_name->text();
    QString description = ui->course_description->text();
    int workload = ui->course_workload->text().toInt();
    QString modality = ui->course_modality_comboBox->currentText();

    Course course = Course(code, name, description, workload, modality);
    college.addCourse(course);
    updateCourseComboBox();
}

void MainWindow::on_subject_register_btn_clicked() {
    QString code = ui->subject_code->text();
    QString name = ui->subject_name->text();
    QString description = ui->subject_description->text();
    QString semester = ui->subject_semester->text();
    QString program = ui->subject_program->text();
    QString bibliography = ui->subject_bibliography->text();
    QString courseName = ui->subject_course_comboBox->currentText();

    Subject subject = Subject(code, name, description, semester, program, bibliography);
    subjectRegisterService.registerToCourse(&college.courses, courseName, subject);
    updateSubjectComboBox();
}

void MainWindow::on_class_register_btn_clicked() {
    QString code = ui->class_code->text();
    int maxStudents = ui->class_maxStudent->text().toInt();
    QString shift = ui->class_shift_comboBox->currentText();
    QString subject = ui->class_subject_comboBox->currentText();

    Class clazz = Class(code, maxStudents, shift);
    classRegisterService.registerToSubject(&college.courses, subject, clazz);
    updateClassComboBox();
}

void MainWindow::on_teacher_register_btn_clicked() {
    QString name = ui->teacher_name->text();
    QString email = ui->teacher_email->text();
    QString address = ui->teacher_address->text();
    QString cpf = ui->teacher_cpf->text();
    QString rg = ui->teacher_rg->text();
    QString contractType = ui->teacher_contract_combobox->currentText();
    QString course = ui->teacher_course_combobox->currentText();
    QString subject = ui->teacher_subject_combobox->currentText();
    QString clazz = ui->teacher_class_combobox->currentText();

    Teacher teacher = Teacher(name, email, address, cpf, rg, contractType);
    teacherRegisterService.registerToClass(&college.courses, course, subject, clazz, teacher);
}

void MainWindow::on_student_register_btn_clicked() {
    QString name = ui->student_name->text();
    QString email = ui->student_email->text();
    QString address = ui->student_address->text();
    QString cpf = ui->student_cpf->text();
    QString rg = ui->student_rg->text();
    QString course = ui->student_course_combobox->currentText();
    QString subject = ui->student_subject_combobox->currentText();
    QString clazz = ui->student_class_combobox->currentText();

    Student student = Student(name, email, address, cpf, rg);
    studentRegisterService.registerToClass(&college.courses, course, subject, clazz, student);
}

void MainWindow::on_show_data_btn_clicked() {
    Dialog dialog;
    dialog.setData(college);
    dialog.exec();
}
