#include <iostream>
#include <cmath>
#include <stdexcept>
#include <string>
using namespace std;

// ===== ВАРІАНТ 4: власне виключення =====
class MyException : public exception {
    string message;
public:
    MyException(string msg) : message(msg) {}
    const char* what() const noexcept override {
        return message.c_str();
    }
};

// ===== ВАРІАНТ 1: без специфікації =====
void solve1(double a, double b, double c) {
    if (a == 0) throw "Коефіцієнт 'a' не може дорівнювати 0";
    double D = b * b - 4 * a * c;
    if (D < 0) throw "Дискримінант від’ємний, дійсних коренів немає.";
    double x1 = (-b + sqrt(D)) / (2 * a);
    double x2 = (-b - sqrt(D)) / (2 * a);
    cout << "Варіант 1: x1=" << x1 << " x2=" << x2 << endl;
}

// ===== ВАРІАНТ 2: специфікація throw() =====
void solve2(double a, double b, double c) throw() {
    try {
        if (a == 0) throw invalid_argument("a = 0");
        double D = b * b - 4 * a * c;
        if (D < 0) throw runtime_error("Від’ємний дискримінант");
        cout << "Варіант 2: x1=" << (-b + sqrt(D)) / (2 * a)
            << " x2=" << (-b - sqrt(D)) / (2 * a) << endl;
    }
    catch (exception& e) {
        cerr << "Помилка у solve2(): " << e.what() << endl;
    }
}

// ===== ВАРІАНТ 3: конкретна специфікація =====
void solve3(double a, double b, double c) throw(invalid_argument, runtime_error) {
    if (a == 0) throw invalid_argument("a не може бути 0");
    double D = b * b - 4 * a * c;
    if (D < 0) throw runtime_error("Дискримінант < 0");
    cout << "Варіант 3: x1=" << (-b + sqrt(D)) / (2 * a)
        << " x2=" << (-b - sqrt(D)) / (2 * a) << endl;
}

// ===== ВАРІАНТ 4: власне виключення =====
void solve4(double a, double b, double c) {
    if (a == 0) throw MyException("a не може дорівнювати 0");
    double D = b * b - 4 * a * c;
    if (D < 0) throw MyException("Від’ємний дискримінант");
    cout << "Варіант 4: x1=" << (-b + sqrt(D)) / (2 * a)
        << " x2=" << (-b - sqrt(D)) / (2 * a) << endl;
}

// ===== ГОЛОВНА ФУНКЦІЯ =====
int main() {
    double a, b, c;
    cout << "Введіть коефіцієнти a, b, c: ";
    cin >> a >> b >> c;

    try {
        solve1(a, b, c);
    }
    catch (const char* msg) {
        cerr << "Виключення (solve1): " << msg << endl;
    }

    solve2(a, b, c);

    try {
        solve3(a, b, c);
    }
    catch (invalid_argument& e) {
        cerr << "Помилка (solve3): " << e.what() << endl;
    }
    catch (runtime_error& e) {
        cerr << "Помилка (solve3): " << e.what() << endl;
    }

    try {
        solve4(a, b, c);
    }
    catch (MyException& e) {
        cerr << "Моє виключення: " << e.what() << endl;
    }

    return 0;
}