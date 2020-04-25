#ifndef DOCEDELEITEDECORATOR_H
#define DOCEDELEITEDECORATOR_H

#include "pizzadecorator.h"


class DoceDeLeiteDecorator : public PizzaDecorator {

public:
    DoceDeLeiteDecorator(Pizza*);

    double getValor();

    int getCalorias();
};

#endif // DOCEDELEITEDECORATOR_H
