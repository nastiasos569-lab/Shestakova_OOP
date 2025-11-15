#ifndef TRIANGLE_H
#define TRIANGLE_H

class Triangle {
public:
    virtual double area() const = 0;
    virtual double perimeter() const = 0;
    virtual void printInfo() const = 0;
    virtual ~Triangle() {}
};

#endif // TRIANGLE_H#pragma once
