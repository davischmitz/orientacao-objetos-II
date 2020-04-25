#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "qudpsocket.h"
#include <QAbstractSocket>

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
    void on_pushButtonMonitoringConnect_clicked();

    void on_pushButtonSend_clicked();

    void dataArrived();

private:
    Ui::MainWindow *ui;

    QUdpSocket * socket;
};

#endif // MAINWINDOW_H
