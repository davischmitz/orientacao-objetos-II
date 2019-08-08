//
// Created by davis on 07/08/2019.
//

#include "PessoaFisica.h"
#include <string>
#include <iostream>

using namespace std;

PessoaFisica::PessoaFisica() {}

PessoaFisica::PessoaFisica(string nome, string telefone, string endereco, string cpf) {
    this->nome = nome;
    this->telefone = telefone;
    this->endereco = endereco;
    this->cpf = cpf;
}

PessoaFisica::~PessoaFisica() {}

string PessoaFisica::getCpf() {
    return cpf;
}

void PessoaFisica::imprimirDados() {
    cout << "nome: " << nome << endl;
    cout << "endereco: " << endereco << endl;
    cout << "telefone: " << telefone << endl;
    cout << "cpf: " << cpf << endl;
}

