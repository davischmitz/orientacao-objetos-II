#ifndef CHOCOLATECAKE_H
#define CHOCOLATECAKE_H
#include <iostream>
#include "caketemplate.h"

using namespace std;

class ChocolateCake : public CakeTemplate {

public:
    ChocolateCake();
    ~ChocolateCake();

    void prepararMassa();
    void aquecerForno();
    void prepararCobertura();
    void assar();
};

#endif // CHOCOLATECAKE_H
