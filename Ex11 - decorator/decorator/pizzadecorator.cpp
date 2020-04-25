#include "pizzadecorator.h"

PizzaDecorator::PizzaDecorator() {}

PizzaDecorator::PizzaDecorator(Pizza* decoratedPizza) {
    this->decoratedPizza = decoratedPizza;
}
