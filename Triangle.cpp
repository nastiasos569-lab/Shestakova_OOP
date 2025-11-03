#include "Triangle.h"
#include <sstream>
#include <cmath>
#include <string>
using namespace std;

// --- Конструктори ---
Triangle::Triangle() {
    a = b = c = 0;
    A = B = C = 0;
}

Triangle::Triangle(float side_a, float side_b, float side_c) {
    Init(side_a, side_b, side_c, 0, 0, 0);
}

Triangle::Triangle(float side_a, float side_b, float side_c,
    float angle_A, float angle_B, float angle_C) {
    Init(side_a, side_b, side_c, angle_A, angle_B, angle_C);
}

// --- Ініціалізація ---
void Triangle::Init(float side_a, float side_b, float side_c,
    float angle_A, float angle_B, float angle_C) {
    a = side_a;
    b = side_b;
    c = side_c;
    A = angle_A;
    B = angle_B;
    C = angle_C;
}

// --- Перевірка існування ---
bool Triangle::IsValid() {
    // Перевірка трикутної нерівності
    bool sides_ok = (a + b > c) && (a + c > b) && (b + c > a);

    // Перевірка коректності кутів (не обов’язкова, якщо кути не задаються)
    bool angles_ok = true;
    if (A > 0 || B > 0 || C > 0)
        angles_ok = (fabs(A + B + C - 180) < 1e-3) &&
        (A > 0 && B > 0 && C > 0);

    return sides_ok && angles_ok;
}

// --- Рядкове представлення ---
string Triangle::toString() {
    stringstream ss;
    ss << "Сторони: a=" << a << " b=" << b << " c=" << c
        << "; Кути: A=" << A << " B=" << B << " C=" << C;
    return ss.str();
}

// --- Периметр ---
float Triangle::Perimeter() {
    return a + b + c;
}

// --- Площа ---
float Triangle::Square() {
    if (!IsValid()) return 0;
    float p = Perimeter() / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

// --- Висоти ---
float Triangle::HeightA() { return (IsValid() ? (2 * Square()) / a : 0); }
float Triangle::HeightB() { return (IsValid() ? (2 * Square()) / b : 0); }
float Triangle::HeightC() { return (IsValid() ? (2 * Square()) / c : 0); }

// --- Тип трикутника ---
string Triangle::Type() {
    if (!IsValid()) return "Трикутник не існує";

    bool bySides = (fabs(a - b) < 1e-3 && fabs(b - c) < 1e-3)
        ? true : (fabs(a - b) < 1e-3 || fabs(a - c) < 1e-3 || fabs(b - c) < 1e-3);

    bool byAngles = (fabs(A - 90) < 1e-3 || fabs(B - 90) < 1e-3 || fabs(C - 90) < 1e-3);

    if (fabs(a - b) < 1e-3 && fabs(b - c) < 1e-3)
        return "Рівносторонній трикутник";
    else if (byAngles)
        return "Прямокутний трикутник";
    else if (bySides)
        return "Рівнобедрений трикутник";
    else
        return "Різносторонній трикутник";
}