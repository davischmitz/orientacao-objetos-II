#include "mainwindow.h"
#include "rectangleadapter.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    RectangleAdapter adapter;
    ui->lineEdit->setText(adapter.draw());
}
