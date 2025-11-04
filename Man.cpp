#include "Man.h"
#include<iostream>
using namespace std;

Man::Man(string n, int a, string g, double w)
    : name(n), age(a), gender(g), weight(w) {
}

void Man::setName(string n) {
    name = n;
}
void Man::setAge(int a) {
    age = a;
}
void Man::addAge(int years) {
    age = age + years;
}
void Man::setWeight(double w) {
    if (w > 0){
        weight = w;}
}
void Man::showInfo() const {
    cout << "Ім'я: " << name << endl;
    cout << "Вік: " << age << endl;
    cout << "Стать: " << gender << endl;
    cout << "Вага: " << weight << endl;
}

