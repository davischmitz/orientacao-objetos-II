#include "molhotomatedecorator.h"
#include "pizza.h"
#include "pizzasalgada.h"
#include "queijodecorator.h"

#include <QCoreApplication>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    cout << "Pizzaria: " << endl;

    Pizza* pizzaSalgada = new PizzaSalgada();

    Pizza* pizzaQueijo = new QueijoDecorator(pizzaSalgada);

    Pizza* pizzaQueijoMolho = new MolhoTomateDecorator(pizzaQueijo);

    cout << "Valor da Pizza: " << pizzaQueijoMolho->getValor() << endl
         << "Calorias da Pizza: " << pizzaQueijoMolho->getCalorias() << endl;


    return a.exec();
}
