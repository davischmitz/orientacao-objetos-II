#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>

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
    void on_pushButton_clicked();

    void on_btn_salvar_clicked();

private:
    QFile f;
    Ui::MainWindow *ui;

    void checkIfFileExists();
    void checkFilePermissions();
};

#endif // MAINWINDOW_H
