#include "Triangle.h"
#include <iostream>
#include <cmath>
#include <sstream>
using namespace std;

void Triangle::Init(float side_a, float side_b, float side_c, float angle_A, float angle_B, float angle_C) {
    a = side_a;
    b = side_b;
    c = side_c;
    A = angle_A;
    B = angle_B;
    C = angle_C;
}

void Triangle::Read() {
    float side_a, side_b, side_c;
    float angle_A, angle_B, angle_C;
    cout << "Введіть сторони трикутника (a, b, c): ";
    cin >> side_a >> side_b >> side_c;
    cout << "Введіть кути трикутника (A, B, C): ";
    cin >> angle_A >> angle_B >> angle_C;
    Init(side_a, side_b, side_c, angle_A, angle_B, angle_C);
}

void Triangle::Display() {
    cout << "Сторони: a=" << a << " b=" << b << " c=" << c << endl;
    cout << "Кути: A=" << A << " B=" << B << " C=" << C << endl;
}

string Triangle::toString() {
    stringstream ss;
    ss << "Сторони: a=" << a << " b=" << b << " c=" << c << "; Кути: A=" << A << " B=" << B << " C=" << C;
    return ss.str();
}

float Triangle::Perimeter() {
    return a + b + c;
}

float Triangle::Square() {
    float p = Perimeter() / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

float Triangle::HeightA() {
    return (2 * Square()) / a;
}
float Triangle::HeightB() {
    return (2 * Square()) / b;
}
float Triangle::HeightC() {
    return (2 * Square()) / c;
}

string Triangle::Type() {
    if (A == B && A == C)
        return "Трикутник рівносторонній";
    else if (A == B || A == C || B == C)
        return "Трикутник рівнобедрений";
    else if (A == 90 || B == 90 || C == 90)
        return "Трикутник прямокутний";
    return "Різносторонній";
}