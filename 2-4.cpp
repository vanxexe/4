#include <iostream>
#include <clocale>

int main()
{
    setlocale(LC_ALL, "");

    double r;

    std::cout << "Введіть радіус круга: ";
    std::cin >> r;

    double P = 2*3.14*r;
    double S = 3.14*r*r;

    std::cout << "Периметр = " << P << std::endl;
    std::cout << "Площа = " << S;

    return 0;
}
