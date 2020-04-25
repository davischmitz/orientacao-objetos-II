#include "docedeleitedecorator.h"

DoceDeLeiteDecorator::DoceDeLeiteDecorator(Pizza* decoratedPizza) : PizzaDecorator(decoratedPizza) {
    this->valor = 8.0;
    this->calorias = 190;
}

double DoceDeLeiteDecorator::getValor() {
    return this->valor + decoratedPizza->getValor();
}

int DoceDeLeiteDecorator::getCalorias() {
    return this->calorias + decoratedPizza->getCalorias();
}
