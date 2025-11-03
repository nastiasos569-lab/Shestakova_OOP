#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
using namespace std;

// --- Макрос для експорту / імпорту ---
#ifdef TRIANGLELIB_EXPORTS
#define TRIANGLE_API __declspec(dllexport)
#else
#define TRIANGLE_API __declspec(dllimport)
#endif
class TRIANGLE_API Triangle
{
private:
    float A, B, C;
    float a, b, c;

public:
    // --- Конструктори ---
    Triangle();
    Triangle(float side_a, float side_b, float side_c);
    Triangle(float side_a, float side_b, float side_c,
        float angle_A, float angle_B, float angle_C);

    // --- Методи ---
    void Init(float side_a, float side_b, float side_c,
        float angle_A, float angle_B, float angle_C);
    bool IsValid();
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
