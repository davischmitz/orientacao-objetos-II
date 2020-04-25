#include "statistics.h"

#include <QCoreApplication>

#include <vector>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Statistics statistics;

    vector<float> values{ 15, 20, 30, 10, 12.5 };

    statistics.print(values);

    return a.exec();
}
