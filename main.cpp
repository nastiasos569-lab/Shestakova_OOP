// Створити клас Triangle для представлення трикутника. Поля даних повинні
//містити кути й сторони.Потрібно реалізувати операції : отримання й зміни
//полів даних, обчислення площі, обчислення периметра, обчислення висот, а
//також визначення виду трикутника(рівносторонній, рівнобедрений або прямокутний).

#include<iostream>
#include<math.h>
#include <sstream>
using namespace std;
class Triangle {
private:
	float A, B, C;
	float a, b, c;
public:
    void Init(float side_a, float side_b, float side_c, float angle_A, float angle_B, float angle_C) {
        a = side_a;
        b = side_b;
        c = side_c;
        A = angle_A;
        B = angle_B;
        C = angle_C;
    }

    // введення з клавіатури
    void Read() {
        float side_a, side_b, side_c;
        float angle_A, angle_B, angle_C;

        cout << "Введіть сторони трикутника (a, b, c): ";
        cin >> side_a >> side_b >> side_c;
        cout << "Введіть кути трикутника (A, B, C): ";
        cin >> angle_A >> angle_B >> angle_C;

        // тепер ініціалізуємо поля класу через Init()
        Init(side_a, side_b, side_c, angle_A, angle_B, angle_C);
    }
    // виведення
    void Display() {
        cout << "Сторони: a=" << a << " b=" << b << " c=" << c << endl;
        cout << "Кути: A=" << A << " B=" << B << " C=" << C << endl;
    }
    //Перетворення на рядок
    string toString() {
        stringstream ss; // створюємо буфер
        ss << "Сторони: a=" << a << " b=" << b << " c=" << c << "; Кути: A=" << A << " B=" << B << " C=" << C;
        return ss.str(); // повертаємо рядок
    }
    //Периметр
    float Perimeter() {
        return a + b + c;
    }
    /// Площа
    float Square() {
        float p = Perimeter() / 2;
        return sqrt(p * (p - a) * (p - b) * (p - c));
    }
    // Висоти
    float HeightA() {
        return (2 * Square()) / a;
    }
    float HeightB() {
        return (2 * Square()) / b;
    }
    float HeightC() {
        return (2 * Square()) / c;
    }
    //Тип трикутника
    string Type() {
        if (A == B && A == C)
            return "Трикутник рівносторонній";
        else if (A == B || A == C)
            return "Трикутник рівнобедренний";
        else if (A == 90 || B == 90 || C == 90)
            return "Трикутник прямокутний";
        return  "Різносторонній";
    }
    
};
int main() {
    Triangle t;
    t.Read();
    t.Display();
    cout<<t.toString()<<endl;
    cout<<"Периметр = " << t.Perimeter()<<endl;
    cout<<"Площа = "<<t.Square()<<endl;
    cout<<"Висота = " << t.HeightA()<<endl;
    cout<<"Висота = " << t.HeightB()<<endl;
    cout<<"Висота = І" << t.HeightC()<<endl;
    cout<<t.Type();
   
}