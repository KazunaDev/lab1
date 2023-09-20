#include <iostream>
#include <locale>
#include <Windows.h>

int main() {
    //13 варіант
    double a, b;
    int c;
    float x;
    
    // Кодування
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    // Запит значень у користувача
    std::cout << "Введіть значення змінної a: ";
    std::cin >> a;

    std::cout << "Введіть значення змінної b: ";
    std::cin >> b;

    std::cout << "Введіть значення змінної c: ";
    std::cin >> c;

    // Обчислення за формулою
    x = a + a * c + a * b - a * b / 3;

    // Виведення результату
    std::cout << "Результат: " << x << std::endl;

    return 0;
}
