#ifndef RECTANGLEADAPTER_H
#define RECTANGLEADAPTER_H
#include "rectangle.h"

#include <QString>

class RectangleAdapter: public Rectangle
{
public:
    RectangleAdapter();
    QString draw();
};

#endif // RECTANGLEADAPTER_H
