#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "classregisterservice.h"
#include "college.h"
#include "studentregisterservice.h"
#include "subjectregisterservice.h"
#include "teacherregisterservice.h"
#include <string>
#include <iostream>

#include <QMainWindow>

using namespace std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_student_register_btn_clicked();

    void on_college_register_btn_clicked();

    void on_course_register_btn_clicked();

    void on_subject_register_btn_clicked();

    void on_class_register_btn_clicked();

    void on_show_data_btn_clicked();

    void on_teacher_register_btn_clicked();

private:
    Ui::MainWindow *ui;

    College college;

    SubjectRegisterService subjectRegisterService;
    ClassRegisterService classRegisterService;
    TeacherRegisterService teacherRegisterService;
    StudentRegisterService studentRegisterService;

    void updateStaticComboBoxes();
    void updateCourseComboBox();
    void updateSubjectComboBox();
    void updateClassComboBox();
};

#endif // MAINWINDOW_H
