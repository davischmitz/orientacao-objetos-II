#ifndef CIVILIANTIME_H
#define CIVILIANTIME_H

#include "basetime.h"
#include "civiliantimeimp.h"


class CivilianTime: public BaseTime {

public:
    CivilianTime(int hr, int min, int pm) {
        imp_ = new CivilianTimeImp(hr, min, pm);
    }
};

#endif // CIVILIANTIME_H
