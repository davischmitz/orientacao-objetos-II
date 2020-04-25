#ifndef CARROTCAKE_H
#define CARROTCAKE_H
#include <iostream>
#include "caketemplate.h"

using namespace std;

class CarrotCake : public CakeTemplate {

public:
    CarrotCake();
    ~CarrotCake();

    void prepararMassa();
    void aquecerForno();
    void prepararCobertura();
    void assar();
};

#endif // CARROTCAKE_H
