#include "TriangleByVertices.h"

TriangleByVertices::TriangleByVertices(Point a, Point b, Point c) : A(a), B(b), C(c) {}

double TriangleByVertices::distance(const Point& P1, const Point& P2) const {
    return std::sqrt((P1.x - P2.x) * (P1.x - P2.x) + (P1.y - P2.y) * (P1.y - P2.y));
}

double TriangleByVertices::perimeter() const {
    return distance(A, B) + distance(B, C) + distance(C, A);
}

double TriangleByVertices::area() const {
    double a = distance(A, B);
    double b = distance(B, C);
    double c = distance(C, A);
    double s = (a + b + c) / 2.0;
    return std::sqrt(s * (s - a) * (s - b) * (s - c));
}

void TriangleByVertices::printInfo() const {
    std::cout << "Triangle by vertices:\n";
    std::cout << "A(" << A.x << "," << A.y << "), B(" << B.x << "," << B.y << "), C(" << C.x << "," << C.y << ")\n";
    std::cout << "Perimeter: " << perimeter() << ", Area: " << area() << "\n";
}

double TriangleByVertices::medianLength(const Point& vertex) const {
    Point M;
    if (&vertex == &A) { M = { (B.x + C.x) / 2, (B.y + C.y) / 2 }; }
    else if (&vertex == &B) { M = { (A.x + C.x) / 2, (A.y + C.y) / 2 }; }
    else { M = { (A.x + B.x) / 2, (A.y + B.y) / 2 }; }
    return distance(vertex, M);
}

double TriangleByVertices::midlineLength(double sideLength) const {
    return sideLength / 2.0;
}