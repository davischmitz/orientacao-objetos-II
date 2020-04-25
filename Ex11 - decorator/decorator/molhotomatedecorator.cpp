#include "molhotomatedecorator.h"

MolhoTomateDecorator::MolhoTomateDecorator(Pizza* decoratedPizza) : PizzaDecorator(decoratedPizza) {
    this->valor = 3.0;
    this->calorias = 60;
}

double MolhoTomateDecorator::getValor() {
    return this->valor + decoratedPizza->getValor();
}

int MolhoTomateDecorator::getCalorias() {
    return this->calorias + decoratedPizza->getCalorias();
}
