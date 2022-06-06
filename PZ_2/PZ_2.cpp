// Дано трёхзначное число. В нём зачеркнули первую слева цифру и приписали её справа.


#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a;
    cout << "Введите ваше 3-х значное число: " << "\n";
    cin >> a;

    int b = a / 100;
    int c = a % 100;
    cout << "Ваше число: " << a << "\n";
    cout << "Новое число: " << c << b << "\n";


}