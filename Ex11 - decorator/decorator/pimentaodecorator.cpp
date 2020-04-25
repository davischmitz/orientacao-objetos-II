#include "pimentaodecorator.h"

PimentaoDecorator::PimentaoDecorator(Pizza* decoratedPizza) : PizzaDecorator(decoratedPizza) {
    this->valor = 2.0;
    this->calorias = 10;
}

double PimentaoDecorator::getValor() {
    return this->valor + decoratedPizza->getValor();
}

int PimentaoDecorator::getCalorias() {
    return this->calorias + decoratedPizza->getCalorias();
}
