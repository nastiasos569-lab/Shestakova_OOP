#include "Student.h"
#include<iostream>
using namespace std;

Student::Student(string n, int a, string g, double w, int y)
	: Man(n, a, g, w), year(y) {
}
void Student::setYear(int y) {
	year = y;
}
void Student::increaseYear() {
	year++;
}
void Student::ShowInfo() const {
	cout << "Ім'я: " << name << endl;
	cout << "Вік: " << age << endl;
	cout << "Стать: " << gender << endl;
	cout << "Вага: " << weight << endl;
	cout << "Рік навчання: " << year << endl;
}
