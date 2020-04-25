#ifndef CEBOLADECORATOR_H
#define CEBOLADECORATOR_H

#include "pizzadecorator.h"

class CebolaDecorator : public PizzaDecorator {

public:
    CebolaDecorator(Pizza*);

    double getValor();

    int getCalorias();
};

#endif // CEBOLADECORATOR_H
