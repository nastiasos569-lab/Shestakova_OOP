#include "..\StaticLib\Triangle.h"
#include <iostream>
using namespace std;

int main() {
    Triangle t;
    t.Read();
    t.Display();
    cout << t.toString() << endl;
    cout << "Периметр = " << t.Perimeter() << endl;
    cout << "Площа = " << t.Square() << endl;
    cout << "Висота до сторони a = " << t.HeightA() << endl;
    cout << "Висота до сторони b = " << t.HeightB() << endl;
    cout << "Висота до сторони c = " << t.HeightC() << endl;
    cout << t.Type() << endl;
    return 0;
}