#include "Student.h"
#include<iostream>
using namespace std;

int main() {
    Man person("Олег", 30, "чоловік", 75.5);
    cout << "Базовий клас Man:" << endl;
    person.showInfo();

    person.setName("Олексій");
    person.addAge(2);
    person.setWeight(77);
    person.showInfo();

    cout << "\nПохідний клас Student:" << endl;
    Student st("Марія", 19, "жінка", 55, 1);
    st.ShowInfo();

    st.increaseYear();
    st.setWeight(56.3);
    st.ShowInfo();

    return 0;
}