#ifndef PIZZASALGADA_H
#define PIZZASALGADA_H

#include "pizza.h"

class PizzaSalgada : public Pizza {

public:
    PizzaSalgada();
    ~PizzaSalgada();

    void setValor(double);
    double getValor();

    void setCalorias(int);
    int getCalorias();
};

#endif // PIZZASALGADA_H
