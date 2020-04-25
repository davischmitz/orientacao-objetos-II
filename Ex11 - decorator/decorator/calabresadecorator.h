#ifndef CALABRESADECORATOR_H
#define CALABRESADECORATOR_H

#include "pizzadecorator.h"



class CalabresaDecorator : public PizzaDecorator {

public:
    CalabresaDecorator(Pizza*);

    double getValor();

    int getCalorias();
};

#endif // CALABRESADECORATOR_H
