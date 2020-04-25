#ifndef CLASSSHIFTENUM_H
#define CLASSSHIFTENUM_H
#include <iostream>
#include <QMap>
#include <QString>
#include <string>

using namespace std;

enum ClassShiftEnum {

    DAYTIME,
    NIGHTTIME

};

class ClassShift {

public:
    static map<QString, ClassShiftEnum> shiftMap;
};

#endif // CLASSSHIFTENUM_H
