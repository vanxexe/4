#include <iostream>
#include <clocale>

int main()
{
    setlocale(LC_ALL, "");

    double C;
    std::cout << "Введіть температуру в Цельсіях: ";
    std::cin >> C;

    double F = C*1.8+32;

    std::cout << "Температура у Фаренгейтах = " << F;

    return 0;
}
