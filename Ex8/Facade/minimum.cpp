#include "minimum.h"
#include <algorithm>

Minimum::Minimum() {}

float Minimum::get(vector <float> values) {
    return *min_element(values.begin(), values.end());
}
