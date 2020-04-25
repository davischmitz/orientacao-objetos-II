#ifndef PIZZADOCE_H
#define PIZZADOCE_H

#include "pizza.h"

class PizzaDoce : public Pizza {

public:
    PizzaDoce();
    ~PizzaDoce();

    void setValor(double);
    double getValor();

    void setCalorias(int);
    int getCalorias();
};

#endif // PIZZADOCE_H
