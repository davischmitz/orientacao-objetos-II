#ifndef ZULUTIME_H
#define ZULUTIME_H

#include "basetime.h"
#include "zulutimeimp.h"


class ZuluTime: public BaseTime {

public:
    ZuluTime(int hr, int min, int zone) {
        imp_ = new ZuluTimeImp(hr, min, zone);
    }
};

#endif // ZULUTIME_H
