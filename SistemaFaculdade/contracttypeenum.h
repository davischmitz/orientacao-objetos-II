#ifndef CONTRACTTYPEENUM_H
#define CONTRACTTYPEENUM_H
#include <iostream>
#include <QMap>
#include <QString>

using namespace std;

enum ContractTypeEnum {

    REGULAR,
    SUBSTITUTE

};

class ContractType {

public:
    static map<QString, ContractTypeEnum> contractTypeMap;
};

#endif // CONTRACTTYPEENUM_H
