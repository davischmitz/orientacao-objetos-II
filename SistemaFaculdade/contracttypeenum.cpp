#include "contracttypeenum.h"

map<QString, ContractTypeEnum> ContractType::contractTypeMap = {
    { "Regular", ContractTypeEnum::REGULAR },
    { "Substituto", ContractTypeEnum::SUBSTITUTE }
};
