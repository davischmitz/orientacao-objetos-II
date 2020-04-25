#include "configuration.h"
#include "mainwindow.h"

#include <QApplication>
#include <QDebug>


int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    MainWindow w;

    configuration* instance = configuration::getInstance();

    instance->setIp(QString::fromStdString("192.168.0.1"));
    instance->setPort(9000);
    instance->setUser(QString::fromStdString("Davi"));
    instance->setPassword(QString::fromStdString("1234"));

    configuration* secondInstance = configuration::getInstance();

    qDebug() << "Ip: "   << secondInstance->getIp()
             << "Port: " << secondInstance->getPort()
             << "User: " << secondInstance->getUser()
             << "Pass: " << secondInstance->getPassword();

    w.show();
    return a.exec();
}
