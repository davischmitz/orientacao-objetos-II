#include "basetime.h"
#include "braziliantime.h"
#include "civiliantime.h"
#include "zulutime.h"

#include <QCoreApplication>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    BaseTime *times[4];
    times[0] = new BaseTime(14, 30);
    times[1] = new CivilianTime(2, 30, 1);
    times[2] = new ZuluTime(14, 40, 6);
    times[3] = new BrazilianTime(15, 50);

    for (BaseTime *time : times) {
        time -> tell();
    }

    return a.exec();
}
