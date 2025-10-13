#pragma once
struct product
{
private:
    double price;  // ціна за одиницю
    int quantity;  // кількість

public:
    product Init(double p, int q);
    void Read();
    void Display();
    double cost(); // ← рахує повну вартість
};
