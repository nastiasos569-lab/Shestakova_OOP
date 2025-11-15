#include "TriangleByVertices.h"
#include "TriangleBySides.h"
#include "RightTriangle.h"
#include <iostream>

int main() {
    // Створення трикутника за вершинами
    Point A{ 0, 0 }, B{ 4, 0 }, C{ 0, 3 };
    TriangleByVertices t1(A, B, C);
    std::cout << "Інформація про трикутник за вершинами:\n";
    t1.printInfo();
    std::cout << "Довжина медіани з вершини A: " << t1.medianLength(A) << "\n\n";

    // Створення трикутника за сторонами
    TriangleBySides t2(3, 4, 5);
    std::cout << "Інформація про трикутник за сторонами:\n";
    t2.printInfo();
    std::cout << "Довжина медіани до сторони a: " << t2.medianLengthA() << "\n\n";

    // Створення прямокутного трикутника
    RightTriangle rt(3, 4, 5);
    std::cout << "Прямокутний трикутник:\n";
    std::cout << "Радіус вписаного кола: " << rt.inradius() << "\n";
    std::cout << "Радіус описаного кола: " << rt.circumradius() << "\n";

    return 0;
}