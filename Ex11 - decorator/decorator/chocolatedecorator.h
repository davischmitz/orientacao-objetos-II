#ifndef CHOCOLATEDECORATOR_H
#define CHOCOLATEDECORATOR_H

#include "pizzadecorator.h"



class ChocolateDecorator : public PizzaDecorator {

public:
    ChocolateDecorator(Pizza*);

    double getValor();

    int getCalorias();
};

#endif // CHOCOLATEDECORATOR_H
