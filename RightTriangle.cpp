#include "RightTriangle.h"

RightTriangle::RightTriangle(double side1, double side2, double hypotenuse)
    : TriangleBySides(side1, side2, hypotenuse) {
}

double RightTriangle::inradius() const {
    double s = perimeter() / 2;
    return area() / s;
}

double RightTriangle::circumradius() const {
    double hyp = std::max({ a, b, c });
    return hyp / 2;
}
