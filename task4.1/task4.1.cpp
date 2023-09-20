#include <iostream>
#include <Windows.h>

int main() {
    double radius;
    double area;

    // Кодування
        SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::cout << "Введіть радіус кола: ";
    std::cin >> radius;

    if (radius < 0) {
        std::cout << "Радіус не може бути від'ємним!" << std::endl;
        return 1;
    }

    area = 3.14159 * radius * radius;

    std::cout << "Площа кола: " << area << std::endl;

    return 0;
}