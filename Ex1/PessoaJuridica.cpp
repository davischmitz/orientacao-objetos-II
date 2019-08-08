//
// Created by davis on 07/08/2019.
//

#include "PessoaJuridica.h"
#include <string>
#include <iostream>

using namespace std;

PessoaJuridica::PessoaJuridica() {}

PessoaJuridica::PessoaJuridica(string nome, string telefone, string endereco, string cnpj, string nomeFantasia) {
    this->nome = nome;
    this->telefone = telefone;
    this->endereco = endereco;
    this->cnpj = cnpj;
    this->nomeFantasia = nomeFantasia;
}

PessoaJuridica::~PessoaJuridica() {}

string PessoaJuridica::getCnpj() {
    return cnpj;
}

void PessoaJuridica::setNomeFantasia(string nome) {
    nomeFantasia = nome;
}

string PessoaJuridica::getNomeFantasia() {
    return nomeFantasia;
}

void PessoaJuridica::imprimirDados() {
    cout << "nome: " << nome << endl;
    cout << "endereco: " << endereco << endl;
    cout << "telefone: " << telefone << endl;
    cout << "cnpj: " << cnpj << endl;
    cout << "nome fantasia: " << nomeFantasia << endl;
}

