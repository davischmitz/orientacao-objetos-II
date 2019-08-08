//
// Created by davis on 07/08/2019.
//

#include "Cliente.h"

using namespace std;

Cliente::Cliente() {}

Cliente::Cliente(string nome, string telefone, string endereco) {
        this->nome = nome;
        this->endereco = endereco;
        this->telefone = telefone;
}

Cliente::~Cliente() {}

string Cliente::getNome() {
    return nome;
}

void Cliente::setEndereco(string endereco) {
    endereco = endereco;
}

string Cliente::getEndereco() {
    return endereco;
}

void Cliente::setTelefone(string telefone) {
    telefone = telefone;
}

string Cliente::getTelefone() {
    return telefone;
}
