#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <QString>

class Rectangle
{
public:
    Rectangle();
    virtual QString draw() = 0;
};

#endif // RECTANGLE_H
