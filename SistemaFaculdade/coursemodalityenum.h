#ifndef COURSEMODALITYENUM_H
#define COURSEMODALITYENUM_H
#include <iostream>
#include <QMap>
#include <QString>
#include <string>

using namespace std;

enum CourseModalityEnum {

    PRESENTIAL,
    EAD

};


class CourseModality {

public:
    static map<QString, CourseModalityEnum> modalityMap;
};





#endif // COURSEMODALITYENUM_H
