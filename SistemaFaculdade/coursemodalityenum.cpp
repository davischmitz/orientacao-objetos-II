#include "coursemodalityenum.h"

map<QString, CourseModalityEnum> CourseModality::modalityMap = {
    { "Presencial", CourseModalityEnum::PRESENTIAL },
    { "EAD", CourseModalityEnum::EAD }
};
