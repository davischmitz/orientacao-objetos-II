#ifndef QUEIJODECORATOR_H
#define QUEIJODECORATOR_H

#include "pizzadecorator.h"

class QueijoDecorator : public PizzaDecorator {

public:
    QueijoDecorator(Pizza*);

    double getValor();

    int getCalorias();
};

#endif // QUEIJODECORATOR_H
