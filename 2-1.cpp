#include <iostream>
#include <clocale>

int main()
{
    setlocale(LC_ALL, "");

    int n;
    std::cout << "Введіть трьохзначне число: ";
    std::cin >> n;

    int sum = n/100+(n/10)%10+n%10;

    std::cout << "Сума цифр = " << sum;
    return 0;
}