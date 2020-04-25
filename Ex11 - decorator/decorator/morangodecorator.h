#ifndef MORANGODECORATOR_H
#define MORANGODECORATOR_H

#include "pizzadecorator.h"



class MorangoDecorator : public PizzaDecorator {

public:
    MorangoDecorator(Pizza*);

    double getValor();

    int getCalorias();
};

#endif // MORANGODECORATOR_H
