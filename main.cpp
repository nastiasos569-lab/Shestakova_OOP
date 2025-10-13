#include <iostream>
#include "Triangle.h"
using namespace std;

int main() {
    Triangle t;
    float a, b, c, A, B, C;

    cout << "Введіть сторони трикутника (a, b, c): ";
    cin >> a >> b >> c;

    cout << "Введіть кути трикутника (A, B, C у градусах): ";
    cin >> A >> B >> C;

    // Ініціалізація
    t.Init(a, b, c, A, B, C);

    cout << "\n=== Інформація про трикутник ===" << endl;
    cout << t.toString() << endl;
    cout << "Периметр: " << t.Perimeter() << endl;
    cout << "Площа: " << t.Square() << endl;
    cout << "Висота до сторони a: " << t.HeightA() << endl;
    cout << "Висота до сторони b: " << t.HeightB() << endl;
    cout << "Висота до сторони c: " << t.HeightC() << endl;
    cout << "Тип трикутника: " << t.Type() << endl;

    cout << "=== Демонстрація конструкторів ===" << endl;

    Triangle t1;  // викликається дефолтний конструктор
    cout << t1.toString() << endl << endl;

    Triangle t2(3, 4, 5);  // викликається конструктор зі сторонами
    cout << t2.toString() << endl;
    cout << "Периметр: " << t2.Perimeter() << endl << endl;

    Triangle t3(3, 4, 5, 30, 60, 90);  // викликається повний конструктор
    cout << t3.toString() << endl;
    cout << "Площа: " << t3.Square() << endl;
    cout << "Тип: " << t3.Type() << endl;

    return 0;
    return 0;
};