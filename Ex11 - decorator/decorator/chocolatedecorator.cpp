#include "chocolatedecorator.h"

ChocolateDecorator::ChocolateDecorator(Pizza* decoratedPizza) : PizzaDecorator(decoratedPizza) {
    this->valor = 9.0;
    this->calorias = 150;
}

double ChocolateDecorator::getValor() {
    return this->valor + decoratedPizza->getValor();
}

int ChocolateDecorator::getCalorias() {
    return this->calorias + decoratedPizza->getCalorias();
}
