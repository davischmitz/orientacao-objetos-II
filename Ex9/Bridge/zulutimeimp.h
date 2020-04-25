#ifndef ZULUTIMEIMP_H
#define ZULUTIMEIMP_H

#include "basetimeimp.h"
#include "string.h"
#include <iostream>

using namespace std;

class ZuluTimeImp: public BaseTimeImp {

public:
    ZuluTimeImp(int hr, int min, int zone): BaseTimeImp(hr, min) {
        if (zone == 5) {
            strcpy(zone_, "Eastern Standard Time");
        } else if (zone == 6) {
            strcpy (zone_, "Central Standard Time");
        }
    }

    void tell() {
        cout << "time is " << hr_ << ":" << min_ << " " << zone_ << endl;
    }

protected:
    char zone_[30];
};

#endif // ZULUTIMEIMP_H
