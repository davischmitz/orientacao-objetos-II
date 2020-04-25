#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include "college.h"

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

    void setData(College);

private:
    Ui::Dialog *ui;

    void appendCollegeData(QString *, College);
    void appendCourseData(QString *, Course);
    void appendClassData(QString *, Class);
    void appendStudentData(QString *, Student);
    void appendTeacherData(QString *, Teacher);
    void appendSubjectData(QString *, Subject);
};

#endif // DIALOG_H
