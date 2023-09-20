#include <iostream>
#include <Windows.h>

int main() {
    double radius, circumference;
    const double pi = 3.14159;

    // Кодування
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::cout << "Введіть радіус кола: ";
    std::cin >> radius;

    // Перевірка на коректність радіусу
    if (radius < 0) {
        std::cout << "Радіус не може бути від'ємним!" << std::endl;
        return 1;
    }

    // Обчислення довжини кола
    circumference = 2 * pi * radius;

    std::cout << "Довжина кола: " << circumference << std::endl;

    return 0;
}