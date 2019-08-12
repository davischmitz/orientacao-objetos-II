//
// Created by davis on 07/08/2019.
//

#include "Data.h"
#include <iostream>
#include <ctime>
#include <cmath>
#define MINUTES_IN_DAY 86400

using namespace std;

Data::Data() {};

Data::~Data() {}

Data::Data(int dia, int mes, int ano) {
    this->dia = dia;
    this->mes = mes;
    this->ano = ano;
}

void Data::setDia(int dia) {
    if (dia < 1 || dia > 30) {
        return;
    }
    this-> dia = dia;
}

int Data::getDia() {
    return dia;
}

void Data::setMes(int mes) {
    if (mes < 1 || mes > 12) {
        return;
    }
    this->mes = mes;
}

int Data::getMes() {
    return mes;
}

void Data::setAno(int ano) {
    if (ano < 1) {
        return;
    }
    this->ano = ano;
}

int Data::getAno() {
    return ano;
}

void Data::operator-(Data d) {
    struct tm a = {0,0,0,this->getDia(),this->getMes() - 1,this->getAno() - 1900};
    struct tm b = {0,0,0,d.getDia(),d.getMes() - 1,d.getAno() - 1900};
    time_t x = mktime(&a);
    time_t y = mktime(&b);

    double diff = difftime(y, x) / (MINUTES_IN_DAY);
    diff = abs(diff);
    cout << ctime(&x);
    cout << ctime(&y) << endl;
    cout << "Dias: " << diff << endl;
    cout << "Meses: " << diff / 30 << endl;
    cout << "Anos: " << diff / 365 << endl;
}

