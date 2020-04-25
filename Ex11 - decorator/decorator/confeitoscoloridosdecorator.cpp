#include "confeitoscoloridosdecorator.h"

ConfeitosColoridosDecorator::ConfeitosColoridosDecorator(Pizza* decoratedPizza) : PizzaDecorator(decoratedPizza) {
    this->valor = 2.0;
    this->calorias = 20;
}

double ConfeitosColoridosDecorator::getValor() {
    return this->valor + decoratedPizza->getValor();
}

int ConfeitosColoridosDecorator::getCalorias() {
    return this->calorias + decoratedPizza->getCalorias();
}
