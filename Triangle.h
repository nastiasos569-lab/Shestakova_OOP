#pragma once
#include <string>
using namespace std;

class Triangle {
private:
    float A, B, C;
    float a, b, c;
public:
    void Init(float side_a, float side_b, float side_c, float angle_A, float angle_B, float angle_C);
    void Read();
    void Display();
    string toString();
    float Perimeter();
    float Square();
    float HeightA();
    float HeightB();
    float HeightC();
    string Type();
};