#ifndef LEGACYRECTANGLE_H
#define LEGACYRECTANGLE_H
#include <QString>

class LegacyRectangle
{

private:
    int x1_;
    int y1_;
    int x2_;
    int y2_;

public:
    LegacyRectangle();
    LegacyRectangle(int x1, int y1, int x2, int y2) {
        x1_ = x1;
        y1_ = y1;
        x2_ = x2;
        y2_ = y2;
    }

    QString oldDraw() {
        return "LegacyRectangle: oldDraw()";
    }
};

#endif // LEGACYRECTANGLE_H
