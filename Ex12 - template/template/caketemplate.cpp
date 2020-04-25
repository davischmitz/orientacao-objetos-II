#include "caketemplate.h"

CakeTemplate::CakeTemplate() {}

CakeTemplate::~CakeTemplate() {}

void CakeTemplate::executar() {
    prepararMassa();
    aquecerForno();
    prepararCobertura();
    assar();
}
