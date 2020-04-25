#include "classshiftenum.h"

map<QString, ClassShiftEnum> ClassShift::shiftMap = {
    { "Diurno", ClassShiftEnum::DAYTIME },
    { "Noturno", ClassShiftEnum::NIGHTTIME }
};
