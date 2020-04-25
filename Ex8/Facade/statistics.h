#ifndef STATISTICS_H
#define STATISTICS_H

#include "average.h"
#include "maximum.h"
#include "minimum.h"

#include <vector>


using namespace std;

class Statistics
{

private:
    Average average;
    Minimum minimum;
    Maximum maximum;

public:
    Statistics();

    void print(vector <float>);
};

#endif // STATISTICS_H
