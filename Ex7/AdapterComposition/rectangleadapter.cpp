#include "legacyrectangle.h"
#include "rectangleadapter.h"

RectangleAdapter::RectangleAdapter(){}

QString RectangleAdapter::draw() {
    LegacyRectangle legacyRectangle;
    return legacyRectangle.oldDraw();
}
