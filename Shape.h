#ifndef SHAPE_H
#define SHAPE_H

class Shape {
protected:
    double x;
    double y;
    double rotationAngle;
    double scaleFactor;

public:
    Shape(double x = 0, double y = 0, double rotation = 0, double scale = 1);
    virtual ~Shape();

    virtual void draw() const = 0;
    virtual void hide() const = 0;
    virtual void rotate(double angle) = 0;
    virtual void move(double dx, double dy) = 0;
};

#endif // SHAPE_H