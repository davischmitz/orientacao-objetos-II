#include "maximum.h"
#include <algorithm>

Maximum::Maximum() {}

float Maximum::get(vector <float> values) {
    return *max_element(values.begin(), values.end());
}
