#include "basetime.h"
#include "basetimeimp.h"

BaseTime::BaseTime() {}

BaseTime::BaseTime(int hr, int min) {
    imp_ = new BaseTimeImp(hr, min);
}

void BaseTime::tell() {
    imp_ -> tell();
}
