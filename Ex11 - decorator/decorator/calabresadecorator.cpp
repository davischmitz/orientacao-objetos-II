#include "calabresadecorator.h"

CalabresaDecorator::CalabresaDecorator(Pizza* decoratedPizza) : PizzaDecorator(decoratedPizza) {
    this->valor = 6.0;
    this->calorias = 80;
}

double CalabresaDecorator::getValor() {
    return this->valor + decoratedPizza->getValor();
}

int CalabresaDecorator::getCalorias() {
    return this->calorias + decoratedPizza->getCalorias();
}
