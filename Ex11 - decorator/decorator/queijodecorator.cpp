#include "queijodecorator.h"


QueijoDecorator::QueijoDecorator(Pizza* decoratedPizza) : PizzaDecorator(decoratedPizza) {
    this->valor = 5.0;
    this->calorias = 100;
}

double QueijoDecorator::getValor() {
    return this->valor + decoratedPizza->getValor();
}

int QueijoDecorator::getCalorias() {
    return this->calorias + decoratedPizza->getCalorias();
}
