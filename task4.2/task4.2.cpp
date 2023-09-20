#include <iostream>
#include <cmath>
#include <Windows.h>

int main() {
    double a, b, c;
    double s, area;

    // Кодування
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::cout << "Введіть значення сторін трикутника a, b та c: ";
    std::cin >> a >> b >> c;

    // Перевірка на коректність сторін трикутника
    if (a <= 0 || b <= 0 || c <= 0 || (a + b) <= c || (a + c) <= b || (b + c) <= a) {
        std::cout << "Некоректні значення сторін трикутника!" << std::endl;
        return 1;
    }

    // Обчислення півпериметра
    double p = (a + b + c) / 2;

    // Обчислення площі за формулою Герона
    area = sqrt(p * (p - a) * (p - b) * (p - c));

    std::cout << "Площа трикутника: " << area << std::endl;

    return 0;
}