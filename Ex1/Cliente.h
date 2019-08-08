//
// Created by davis on 07/08/2019.
//

#ifndef EX1_CLIENTE_H
#define EX1_CLIENTE_H

#include <string>

using namespace std;

class Cliente {

protected:
    string nome;
    string telefone;
    string endereco;

public:
    Cliente();
    Cliente(string, string, string);
    ~Cliente();

    virtual void imprimirDados() = 0;

    void setEndereco(string);
    string getEndereco();

    void setTelefone(string);
    string getTelefone();

    string getNome();
};


#endif //EX1_CLIENTE_H
