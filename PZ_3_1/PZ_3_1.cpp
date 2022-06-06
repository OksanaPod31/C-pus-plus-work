//Дано целое положительное число. Проверить истинность высказывания: «Данное число является нечетным трехзначным»


#include <iostream>
#include <Windows.h>



int main()
{
    using namespace std;
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a;
    cout << "Введите вашe число: " << "\n";
    cin >> a;

    if (((99 < a) && (a < 1000)) && (a % 2 != 0)) {
        cout << "Данное число является нечетным трехзначным ";
    }
    else {
        cout << "Данное число не является нечетным трехзначным ";
    }

    return 0;
}