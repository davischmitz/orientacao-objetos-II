#include "morangodecorator.h"

MorangoDecorator::MorangoDecorator(Pizza* decoratedPizza) : PizzaDecorator(decoratedPizza) {
    this->valor = 5.0;
    this->calorias = 30;
}

double MorangoDecorator::getValor() {
   return this->valor + decoratedPizza->getValor();
}

int MorangoDecorator::getCalorias() {
    return this->calorias + decoratedPizza->getCalorias();
}
