#ifndef MOLHOTOMATEDECORATOR_H
#define MOLHOTOMATEDECORATOR_H

#include "pizza.h"
#include "pizzadecorator.h"



class MolhoTomateDecorator : public PizzaDecorator {

public:
    MolhoTomateDecorator(Pizza*);

    double getValor();

    int getCalorias();
};

#endif // MOLHOTOMATEDECORATOR_H
