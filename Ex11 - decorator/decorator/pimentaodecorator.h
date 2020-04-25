#ifndef PIMENTAODECORATOR_H
#define PIMENTAODECORATOR_H

#include "pizza.h"
#include "pizzadecorator.h"


class PimentaoDecorator : public PizzaDecorator {

public:
    PimentaoDecorator(Pizza*);

    double getValor();

    int getCalorias();
};

#endif // PIMENTAODECORATOR_H
