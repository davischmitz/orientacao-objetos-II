#include "ceboladecorator.h"

CebolaDecorator::CebolaDecorator(Pizza* decoratedPizza) : PizzaDecorator(decoratedPizza) {
    this->valor = 6.0;
    this->calorias = 80;
}

double CebolaDecorator::getValor() {
    return this->valor + decoratedPizza->getValor();
}

int CebolaDecorator::getCalorias() {
    return this->calorias + decoratedPizza->getCalorias();
}

