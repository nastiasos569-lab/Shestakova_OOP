#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"

class Rectangle : public Shape {
private:
    double width;
    double height;

public:
    Rectangle(double x, double y, double w, double h, double rotation = 0, double scale = 1);

    void draw() const override;
    void hide() const override;
    void rotate(double angle) override;
    void move(double dx, double dy) override;
    void scale(double factor);
};
#endif