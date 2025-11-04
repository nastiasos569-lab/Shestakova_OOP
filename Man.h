#pragma once
#include <iostream>
#include <string>
using namespace std;

class Man {
protected:
    string name;
    int age;
    string gender;
    double weight;

public:
    // Конструктор
    Man(string n = "Невідомий", int a = 0, string g = "Невідомо", double w = 0.0);

    // Методи зміни полів
    void setName(string n);
    void setAge(int a);
    void addAge(int years);
    void setWeight(double w);

    // Метод для виводу інформації
    void showInfo() const;
};

