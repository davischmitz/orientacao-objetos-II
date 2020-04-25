#ifndef BASETIME_H
#define BASETIME_H

#include "basetimeimp.h"


class BaseTime {

public:
    BaseTime();
    BaseTime(int, int);

    virtual void tell();

protected:
    BaseTimeImp *imp_;
};

#endif // BASETIME_H
