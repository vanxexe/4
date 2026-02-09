#include <iostream>
#include <clocale>

int main()
{
    setlocale(LC_ALL, "");

    int sec;

    std::cout << "Введіть кількість секунд: ";
    std::cin >> sec;

    int h = sec / 3600;
    int m = (sec % 3600) / 60;
    int s = sec % 60;

    std::cout << "Час: " << h << " : " << m << " : " << s;

    return 0;
}
