#include "Rectangle.h"
#include <iostream>
#include <limits>

int main()
{
    double cx, cy, w, h;

    std::cout << "Введіть координати центра прямокутника (x y): ";
    std::cin >> cx >> cy;

    std::cout << "Введіть ширину та висоту прямокутника: ";
    std::cin >> w >> h;

    Rectangle rect(cx, cy, w, h);

    std::cout << "\nСтворено прямокутник:\n";
    rect.draw();

    double dx, dy, angle;
    std::cout << "\nВведіть зсув по x та y: ";
    std::cin >> dx >> dy;
    rect.move(dx, dy);
    std::cout << "Після пересування:\n";
    rect.draw();

    std::cout << "\nВведіть кут повороту (градуси): ";
    std::cin >> angle;
    rect.rotate(angle);
    std::cout << "Після повороту:\n";
    rect.draw();

    std::cout << "\nЗробимо прямокутник невидимим:\n";
    rect.hide();
    rect.draw();

    return 0;
}