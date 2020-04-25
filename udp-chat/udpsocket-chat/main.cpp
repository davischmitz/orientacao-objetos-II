/*
 * Estudo de Caso 2 - Orientação a objetos II
 * 13/10/2019
 *
 * Aline Nunes de Souza
 * Davi de Souza Leão Schmitz
*/


#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
