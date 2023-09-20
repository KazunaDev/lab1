#include <iostream>
#include <cmath>
#include <Windows.h>

int main() {
    //13 варіант
    double x, y; // параметри, які вводяться з клавіатури
    double a = 12.5, b = 1.3;
    double c = 14.1;
    double t1, t2; // результати

    // Кодування
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::cout << "Введіть значення x і y: ";
    std::cin >> x >> y;

    // Розрахунок формули t1
    double t1_numerator = 3 * a * a * log(y) / x + a * a * x / y - 3 * a * y / x;
    double t1_denominator = pow(b, 4);
    t1 = t1_numerator / t1_denominator;

    // Розрахунок формули t2
    double t2_numerator = 2 * b * tan(a * x) / 2;
    double t2_denominator = a * sqrt(pow(b, 2) - pow(c, 2));
    t2 = t2_numerator / t2_denominator;

    std::cout << "t1 = " << t1 << std::endl;
    std::cout << "t2 = " << t2 << std::endl;

    return 0;
}