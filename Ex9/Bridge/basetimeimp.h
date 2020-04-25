#ifndef BASETIMEIMP_H
#define BASETIMEIMP_H
#include <iostream>

using namespace std;

class BaseTimeImp {

public:
    BaseTimeImp(int, int);

    virtual void tell();

protected:
    int hr_, min_;
};

#endif // BASETIMEIMP_H
