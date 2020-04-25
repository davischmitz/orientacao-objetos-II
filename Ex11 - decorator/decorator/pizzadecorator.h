#ifndef PIZZADECORATOR_H
#define PIZZADECORATOR_H

#include "pizza.h"



class PizzaDecorator : public Pizza {

protected:
    Pizza* decoratedPizza;

public:
    PizzaDecorator();
    PizzaDecorator(Pizza*);
};

#endif // PIZZADECORATOR_H
