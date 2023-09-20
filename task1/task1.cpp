#include <iostream>
#include <iomanip>
#include <windows.h>
using namespace std;

int main()
{   //3 варіант
    char processor1[9], processor2[9], processor3[9];
    int frequency1, frequency2, frequency3;
    int ram1, ram2, ram3;
    char type1, type2, type3;

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    /* Введення фактичних даних*/
    cout << "1. Введіть: процесор, частоту, об'єм RAM, тип (C або R) --> ";
    cin >> processor1 >> frequency1 >> ram1 >> type1;
    cout << "2. Введіть: процесор, частоту, об'єм RAM, тип (C або R) --> ";
    cin >> processor2 >> frequency2 >> ram2 >> type2;
    cout << "3. Введіть: процесор, частоту, об'єм RAM, тип (C або R) --> ";
    cin >> processor3 >> frequency3 >> ram3 >> type3;

    /* Виведення таблиці */
    /* виведення заголовків */
    cout << "-------------------------------------------------------" << endl;
    cout << "|                 Характеристики ПЕОМ                  |" << endl;
    cout << "-------------------------------------------------------" << endl;
    cout << "|  Процесор  |  Частота  |  RAM (Gb)  |     Тип        |" << endl;
    cout << "-------------------------------------------------------" << endl;
    /* виведення рядків фактичних даних */
    cout << "| " << setw(9) << processor1 << " | " << setw(9) << frequency1 << " | " << setw(10) << ram1 << " |     " << setw(7) << type1 << "   |" << endl;
    cout << "| " << setw(9) << processor2 << " | " << setw(9) << frequency2 << " | " << setw(10) << ram2 << " |     " << setw(7) << type2 << "   |" << endl;
    cout << "| " << setw(9) << processor3 << " | " << setw(9) << frequency3 << " | " << setw(10) << ram3 << " |     " << setw(7) << type3 << "   |" << endl;
    /* виведення приміток */
    cout << "-------------------------------------------------------" << endl;
    cout << "|               Тип: C - Cisc-Процесор,                |" << endl;
    cout << "-------------------------------------------------------" << endl;
    cout << "|                  R - Risc-Процесор                   |" << endl;
    cout << "-------------------------------------------------------" << endl;

    system("pause");
    return 0;
}