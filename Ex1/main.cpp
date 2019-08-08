#include <iostream>
#include "PessoaFisica.h"
#include "PessoaJuridica.h"

using namespace std;

int main() {

    PessoaFisica pessoaFisica("Davi", "95503855", "Rua Gomes Jardim", "04001802007");
    pessoaFisica.imprimirDados();

    cout << "\n\n" << endl;

    PessoaJuridica pessoaJuridica("Aline", "95679866", "Rua Aline Nunes", "12312312543", "Gelson");
    pessoaJuridica.imprimirDados();

    return 0;
}