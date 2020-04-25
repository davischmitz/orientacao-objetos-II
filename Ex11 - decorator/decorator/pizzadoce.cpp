#include "pizzadoce.h"

PizzaDoce::PizzaDoce() {
    this->setValor(20.0);
    this->setCalorias(150);
}

PizzaDoce::~PizzaDoce() {}

void PizzaDoce::setValor(double valor) {
    this->valor = valor;
}

double PizzaDoce::getValor() {
    return valor;
}

void PizzaDoce::setCalorias(int calorias) {
    this->calorias = calorias;
}

int PizzaDoce::getCalorias() {
    return calorias;
}
