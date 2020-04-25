#include "average.h"
#include <iostream>
#include <numeric>

using namespace std;

Average::Average() {}

float Average::calulate(vector <float> arr) {
    return accumulate(arr.begin(), arr.end(), 0.0) / arr.size();
}
