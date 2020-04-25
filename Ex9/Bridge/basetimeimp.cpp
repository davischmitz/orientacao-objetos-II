#include "basetimeimp.h"
#include <iostream>

BaseTimeImp::BaseTimeImp(int hr, int min) {
    hr_ = hr;
    min_ = min;
}

void BaseTimeImp::tell() {
    cout << "time is " << hr_ << ":" << min_ << endl;
}
