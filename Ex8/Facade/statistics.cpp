#include "statistics.h"
#include <iostream>

Statistics::Statistics() {}

void Statistics::print(vector<float> values) {
    cout << "Minimo: " << minimum.get(values) << endl
         << "Media: " << average.calulate(values) << endl
         << "Maximo: " << maximum.get(values) << endl;
}
