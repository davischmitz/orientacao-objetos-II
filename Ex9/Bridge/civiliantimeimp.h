#ifndef CIVILIANTIMEIMP_H
#define CIVILIANTIMEIMP_H

#include "basetime.h"
#include "string.h"
#include <iostream>

using namespace std;

class CivilianTimeImp: public BaseTimeImp {

public:
    CivilianTimeImp(int hr, int min, int pm): BaseTimeImp(hr, min) {
        if (pm) {
            strcpy(whichM_, "pm");
        } else {
            strcpy(whichM_, "am");
        }
    }
    void tell() {
        cout << "time is " << hr_  << ":" << min_ << " " << whichM_ << endl;
    }
protected:
    char whichM_[4];
};

#endif // CIVILIANTIMEIMP_H
