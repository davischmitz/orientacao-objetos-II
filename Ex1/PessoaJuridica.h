//
// Created by davis on 07/08/2019.
//

#ifndef EX1_PESSOAJURIDICA_H
#define EX1_PESSOAJURIDICA_H

#include <string>
#include <iostream>
#include "Cliente.h"

using namespace std;

class PessoaJuridica : public Cliente{

private:
    string cnpj;
    string nomeFantasia;

public:
    PessoaJuridica();
    PessoaJuridica(string, string, string, string, string);
    ~PessoaJuridica();

    string getCnpj();
    string getNomeFantasia();
    void setNomeFantasia(string);

    void imprimirDados();
};

#endif //EX1_PESSOAJURIDICA_H
