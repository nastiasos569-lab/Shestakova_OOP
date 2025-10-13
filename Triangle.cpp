#include "Triangle.h"
#include <sstream>
#include <cmath>
Triangle& Triangle::operator=(const Triangle& other) {
    // перевірка на самоприсвоєння
    if (this != &other) {
        a = other.a;
        b = other.b;
        c = other.c;
        A = other.A;
        B = other.B;
        C = other.C;
    }
    // повертаємо посилання на поточний об’єкт
    return *this;
}
bool Triangle::operator==(const Triangle& other) const {
    return (a == other.a && b == other.b && c == other.c);
}

Triangle Triangle::operator+(const Triangle& other) const {
    // нові сторони — середнє арифметичне відповідних сторін
    float newA = (a + other.a) / 2;
    float newB = (b + other.b) / 2;
    float newC = (c + other.c) / 2;

    // створюємо і повертаємо новий об’єкт
    return Triangle(newA, newB, newC);
}
ostream& operator<<(ostream& os, const Triangle& t) {
    os << "Triangle: "
        << "a = " << t.a << ", "
        << "b = " << t.b << ", "
        << "c = " << t.c;
    return os;
}
// --- Конструктори ---
Triangle::Triangle() {
    a = b = c = 0;
    A = B = C = 0;
}

Triangle::Triangle(float side_a, float side_b, float side_c) {
    a = side_a;
    b = side_b;
    c = side_c;
    A = B = C = 0;
}

Triangle::Triangle(float side_a, float side_b, float side_c,
    float angle_A, float angle_B, float angle_C) {
    a = side_a;
    b = side_b;
    c = side_c;
    A = angle_A;
    B = angle_B;
    C = angle_C;
}
//Методи
void Triangle::Init(float side_a, float side_b, float side_c,
    float angle_A, float angle_B, float angle_C) {
    a = side_a;
    b = side_b;
    c = side_c;
    A = angle_A;
    B = angle_B;
    C = angle_C;
}

string Triangle::toString() {
    stringstream ss;
    ss << "Сторони: a=" << a << " b=" << b << " c=" << c
        << "; Кути: A=" << A << " B=" << B << " C=" << C;
    return ss.str();
}

float Triangle::Perimeter() {
    return a + b + c;
}

float Triangle::Square() {
    float p = Perimeter() / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

float Triangle::HeightA() { return (2 * Square()) / a; }
float Triangle::HeightB() { return (2 * Square()) / b; }
float Triangle::HeightC() { return (2 * Square()) / c; }

string Triangle::Type() {
    if (A == B && A == C)
        return "Трикутник рівносторонній";
    else if (A == B || A == C || B == C)
        return "Трикутник рівнобедрений";
    else if (A == 90 || B == 90 || C == 90)
        return "Трикутник прямокутний";
    return "Різносторонній";
}
