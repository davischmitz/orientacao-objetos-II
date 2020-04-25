#ifndef BRAZILIANTIME_H
#define BRAZILIANTIME_H

#include "basetime.h"
#include "braziliantimeimp.h"



class BrazilianTime: public BaseTime {

public:
    BrazilianTime(int hr, int min) {
        imp_ = new BrazilianTImeImp(hr, min);
    }
};

#endif // BRAZILIANTIME_H
