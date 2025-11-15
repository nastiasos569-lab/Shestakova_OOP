#ifndef TRIANGLEBYVERTICES_H
#define TRIANGLEBYVERTICES_H

#include "Triangle.h"
#include <iostream>
#include <cmath>

struct Point {
    double x, y;
};

class TriangleByVertices : public Triangle {
private:
    Point A, B, C;
    double distance(const Point& P1, const Point& P2) const;
public:
    TriangleByVertices(Point a, Point b, Point c);
    double perimeter() const override;
    double area() const override;
    void printInfo() const override;

    double medianLength(const Point& vertex) const;
    double midlineLength(double sideLength) const;
};

#endif // TRIANGLEBYVERTICES_H#pragma once
