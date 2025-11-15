#include "Rectangle.h"
#include <iostream>
using namespace std;

Rectangle::Rectangle(double x, double y, double w, double h, double rotation, double scale)
    : Shape(x, y, rotation, scale), width(w), height(h) {
}

void Rectangle::draw() const {
    cout << "Намалювали прямокутник: центр=(" << x << ", " << y << "), "
        << "ширина=" << width << ", висота=" << height
        << ", кут=" << rotationAngle << ", масштаб=" << scaleFactor << endl;
}

void Rectangle::hide() const {
    cout << "Сховали прямокутник з координат (" << x << ", " << y << ")" << endl;
}

void Rectangle::rotate(double angle) {
    rotationAngle += angle;
    cout << "Повернули прямокутник на " << angle << " градусів. Новий кут = "
        << rotationAngle << endl;
}

void Rectangle::move(double dx, double dy) {
    x += dx;
    y += dy;
    cout << "Перемістили прямокутник на вектор (" << dx << ", " << dy
        << "). Нові координати = (" << x << ", " << y << ")" << endl;
}

void Rectangle::scale(double factor) {
    scaleFactor *= factor;
    width *= factor;
    height *= factor;
    cout << "Змінили масштаб прямокутника на " << factor
        << ". Нові розміри: ширина=" << width << ", висота=" << height << endl;
}