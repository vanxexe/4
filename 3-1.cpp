#include <iostream>
#include <clocale>

int main()
{
    setlocale(LC_ALL, "");

    int price, money;

    std::cout << "Введіть ціну товару: ";
    std::cin >> price;

    std::cout << "Введіть кількість грошей: ";
    std::cin >> money;

    int count = money / price;
    int rest = money % price;

    std::cout << "Можна купити товарів: " << count << std::endl;
    std::cout << "Решта грошей: " << rest;

    return 0;
}
