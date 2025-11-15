#include "Shape.h"

// Конструктор
Shape::Shape(double x, double y, double rotation, double scale)
    : x(x), y(y), rotationAngle(rotation), scaleFactor(scale) {
}

// Віртуальний деструктор
Shape::~Shape() {}