#ifndef CONFEITOSCOLORIDOSDECORATOR_H
#define CONFEITOSCOLORIDOSDECORATOR_H

#include "pizzadecorator.h"



class ConfeitosColoridosDecorator : PizzaDecorator {

public:
    ConfeitosColoridosDecorator(Pizza*);

    double getValor();

    int getCalorias();
};

#endif // CONFEITOSCOLORIDOSDECORATOR_H
