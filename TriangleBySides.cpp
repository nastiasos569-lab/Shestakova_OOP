#include "TriangleBySides.h"

TriangleBySides::TriangleBySides(double side1, double side2, double side3)
    : a(side1), b(side2), c(side3) {
}

double TriangleBySides::perimeter() const {
    return a + b + c;
}

double TriangleBySides::area() const {
    double s = (a + b + c) / 2.0;
    return std::sqrt(s * (s - a) * (s - b) * (s - c));
}

void TriangleBySides::printInfo() const {
    std::cout << "Triangle by sides: a=" << a << ", b=" << b << ", c=" << c << "\n";
    std::cout << "Perimeter: " << perimeter() << ", Area: " << area() << "\n";
}

double TriangleBySides::medianLengthA() const { return 0.5 * std::sqrt(2 * b * b + 2 * c * c - a * a); }
double TriangleBySides::medianLengthB() const { return 0.5 * std::sqrt(2 * a * a + 2 * c * c - b * b); }
double TriangleBySides::medianLengthC() const { return 0.5 * std::sqrt(2 * a * a + 2 * b * b - c * c); }
