//
// Created by davis on 07/08/2019.
//

#ifndef EX1_PESSOAFISICA_H
#define EX1_PESSOAFISICA_H
#include <string>
#include "Cliente.h"

using namespace std;

class PessoaFisica : public Cliente {

private:
    string cpf;

public:
    PessoaFisica();
    PessoaFisica(string, string, string, string);
    ~PessoaFisica();

    string getCpf();

    void imprimirDados();
};


#endif //EX1_PESSOAFISICA_H
