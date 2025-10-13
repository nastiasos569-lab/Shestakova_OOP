#include "product.h"
#include <iostream>
using namespace std;

product product::Init(double p, int q)
{
    product tmp;
    tmp.price = p;
    tmp.quantity = q;
    return tmp;
}

void product::Read()
{
    cout << "Ціна за одиницю: ";
    cin >> price;
    cout << "Кількість: ";
    cin >> quantity;
}

void product::Display()
{
    cout << "Ціна: " << price
        << ", Кількість: " << quantity
        << ", Загальна вартість: " << cost() << endl;
}

double product::cost()
{
    return price * quantity;
}