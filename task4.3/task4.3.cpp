#include <iostream>
#include <Windows.h>

int main() {
    int dividend, divisor;
    int quotient, remainder;

    // Кодування
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::cout << "Введіть ділене: ";
    std::cin >> dividend;

    std::cout << "Введіть дільник: ";
    std::cin >> divisor;

    // Обчислення цілої частини від ділення
    quotient = dividend / divisor;

    // Обчислення залишку
    remainder = dividend % divisor;

    std::cout << "Ціла частина: " << quotient << std::endl;
    std::cout << "Залишок: " << remainder << std::endl;

    return 0;
}