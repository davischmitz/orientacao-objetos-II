#include "carrotcake.h"

CarrotCake::CarrotCake() {
    ingredientes << "1/2 xícara de chá óleo"
                 << "3 cenouras médias raladas"
                 << "4 ovos"
                 << "2 xícaras de chá açúcar"
                 << "2 e 1/2 xícaras de chá farinha de trigo"
                 << "1 colher de sopa fermento";
}

CarrotCake::~CarrotCake() {}

void CarrotCake::prepararMassa() {
    cout << "\nPreparar Massa: " << endl;
    cout << "Em um liquidificador, adicione a cenoura, os ovos e o óleo, depois misture."
         << "Acrescente o açúcar e bata novamente por 5 minutos."
         << "Em uma tigela ou na batedeira, adicione a farinha de trigo e depois misture novamente."
         << "Acrescente o fermento e misture lentamente com uma colher." << endl;
}

void CarrotCake::aquecerForno() {
    cout << "\nAquecer forno: " << endl;
    cout << "Fogo médio: 180ºC" << endl;
}

void CarrotCake::prepararCobertura() {
    cout << "\nPreparar cobertura: " << endl;
    cout << "Despeje em uma tigela a manteiga, o chocolate em pó, o açúcar e o leite, depois misture."
         << "Leve a mistura ao fogo e continue misturando até obter uma consistência cremosa." << endl;
}

void CarrotCake::assar() {
    cout << "\nAssar: " << endl;
    cout << "Assar bolo por 40 min" << endl;
}
