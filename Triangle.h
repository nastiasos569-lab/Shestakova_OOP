#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
using namespace std;

class Triangle
{
private:
    float A, B, C;
    float a, b, c;

public:
    // --- Конструктори ---
    Triangle();                                              // 1) дефолтний
    Triangle(float side_a, float side_b, float side_c);      // 2) параметризований (тільки сторони)
    Triangle(float side_a, float side_b, float side_c,
        float angle_A, float angle_B, float angle_C);   // 3) повний параметризований

    // --- Методи ---
    void Init(float side_a, float side_b, float side_c,
        float angle_A, float angle_B, float angle_C);
    void Read();
    void Display();
    string toString();
    float Perimeter();
    float Square();
    float HeightA();
    float HeightB();
    float HeightC();
    string Type();
    // оператор присвоєння
    Triangle& operator=(const Triangle& other);
    // оператор порівняння
    bool operator==(const Triangle& other) const;
    // оператор додавання
    Triangle operator+(const Triangle& other) const;
    // оператор виведення
    friend ostream& operator<<(ostream& os, const Triangle& t);
};
