#ifndef BRAZILIANTIMEIMP_H
#define BRAZILIANTIMEIMP_H

#include "basetimeimp.h"
#include "string.h"

using namespace std;

class BrazilianTImeImp: public BaseTimeImp {

public:
    BrazilianTImeImp(int hr, int min): BaseTimeImp(hr, min) {
        strcpy(zone_, "BRT");
    }

    void tell() {
        cout << "time is " << hr_ << ":" << min_ << " " << zone_ << endl;
    }


protected:
    char zone_[3];
};

#endif // BRAZILIANTIMEIMP_H
