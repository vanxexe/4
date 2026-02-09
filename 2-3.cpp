#include <iostream>
#include <clocale>

int main()
{
    setlocale(LC_ALL, "");

    double a, b, c, d;

    std::cout << "Введіть 4 числа: ";
    std::cin >> a >> b >> c >> d;

    double avg = (a+b+c+d)/4;

    std::cout << "Середнє арифметичне = " << avg;

    return 0;
}
