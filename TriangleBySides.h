#ifndef TRIANGLEBYSIDES_H
#define TRIANGLEBYSIDES_H

#include "Triangle.h"
#include <iostream>
#include <cmath>

class TriangleBySides : public Triangle {
protected:
    double a, b, c;
public:
    TriangleBySides(double side1, double side2, double side3);
    double perimeter() const override;
    double area() const override;
    void printInfo() const override;

    double medianLengthA() const;
    double medianLengthB() const;
    double medianLengthC() const;
};

#endif // TRIANGLEBYSIDES_H#pragma once
