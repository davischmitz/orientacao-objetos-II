#include "pizzasalgada.h"

PizzaSalgada::PizzaSalgada() {
    this->setValor(20.0);
    this->setCalorias(120);
}

PizzaSalgada::~PizzaSalgada() {}

void PizzaSalgada::setValor(double valor) {
    this->valor = valor;
}

double PizzaSalgada::getValor() {
    return valor;
}

void PizzaSalgada::setCalorias(int calorias) {
    this->calorias = calorias;
}

int PizzaSalgada::getCalorias() {
    return calorias;
}
