#include "carrotcake.h"
#include "chocolatecake.h"

#include <QCoreApplication>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    ChocolateCake chocolateCake;
    CarrotCake carrotCake;

    cout << "\n\nBOLO de CHOCOLATE: " << endl;
    chocolateCake.executar();

    cout << "\n\nBOLO de CENOURA: " << endl;
    carrotCake.executar();

    return a.exec();
}
