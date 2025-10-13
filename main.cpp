#include <iostream>
#include "Triangle.h"
using namespace std;

int main() {
    Triangle t1(3, 4, 5); // створюємо перший трикутник
    Triangle t2;          // створюємо другий
    t2 = t1;              // викликається перевантажений оператор =

    cout << "Після присвоєння: " << t2 << endl; // << перевантажений


    if (t1 == t2)
        cout << "t1 і t2 рівні" << endl;
    else
        cout << "t1 і t2 різні" << endl;


    Triangle t3 = t1 + t2; // викликається перевантажений оператор +

    cout << "Новий трикутник t3 отримано як t1 + t2" << endl;
    cout << t3 << endl; // перевантажено <<
    return 0;
}