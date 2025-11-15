#ifndef RIGHTTRIANGLE_H
#define RIGHTTRIANGLE_H

#include "TriangleBySides.h"
#include <algorithm>

class RightTriangle : public TriangleBySides {
public:
    RightTriangle(double side1, double side2, double hypotenuse);
    double inradius() const;
    double circumradius() const;
};

#endif // RIGHTTRIANGLE_H#pragma once
