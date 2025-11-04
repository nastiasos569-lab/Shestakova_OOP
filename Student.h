#pragma once
#include "Man.h"
using namespace std;

class Student : public Man {
protected:
    int year; // рік навчання

public:
    Student(string n = "Невідомий", int a = 0, string g = "Невідомо", double w = 0.0, int y = 1);

    void setYear(int y);
    void increaseYear();

    // Перевизначений метод показу інформації
    void ShowInfo() const;
};