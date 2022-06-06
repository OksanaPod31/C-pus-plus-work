//Даны три числа. Найти среднее из них (то есть число, расположенное между наименьшим и наибольшим).



#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a;
    int b;
    int c;
    cout << "Введите ваши числа через пробел: " << "\n";
    cin >> a >> b >> c;
    int res1 = (a > b) ? a : b;
    int res2 = (res1 > c) ? res1 : c;  //Mаксимальное число

    int min = (a < b) ? a : b;
    int min2 = (min < c) ? min : c;  //Минимальное число

    if ((min2 < a) && (a < res2)) {
        cout << "Ваше среднее число: " << a;
    }
    else if ((min2 < b) && (b < res2)) {
        cout << "Ваше среднее число: " << b;
    }
    else if ((min2 < c) && (c < res2)) {
        cout << "Ваше среднее число: " << c;
    }

    return 0;
}