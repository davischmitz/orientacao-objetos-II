#include "chocolatecake.h"

ChocolateCake::ChocolateCake() {
    ingredientes << "4 ovos"
                 << "4 colheres de sopa chocolate em pó"
                 << "2 colheres de sopa manteiga"
                 << "3 xícaras de chá farinha de trigo"
                 << "2 colheres de sopa fermento"
                 << "1 xícara de chá leite";

}

ChocolateCake::~ChocolateCake() {}

void ChocolateCake::prepararMassa() {
    cout << "\nPreparar Massa: " << endl;
    cout << "Em um liquidificador adicione os ovos, o chocolate em pó, a manteiga, a farinha de trigo, o açúcar e o leite, depois bata por 5 minutos." << endl;
}

void ChocolateCake::aquecerForno() {
    cout << "\nAquecer forno: " << endl;
    cout << "Fogo médio: 180ºC" << endl;
}

void ChocolateCake::prepararCobertura() {
    cout << "\nPreparar cobertura: " << endl;
    cout << "Coloque em uma panela o leite, o chocolate em pó e a margarina. Leve ao fogo médio até ferver. "
         << "Quando começar a ferver acrescente o leite condensado."
         << "Mexa até ferver e ficar um pouco consistente."
         << "Retire do fogo e está pronta." << endl;
}

void ChocolateCake::assar() {
    cout << "\nAssar: " << endl;
    cout << "Assar bolo por 40 min" << endl;
}
