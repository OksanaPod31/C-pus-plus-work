//Дано вещественное число X и целое число N(> 0).Найти значение выражения 1 + X + X2 / (2!) + ... + XN / (N!)
//(N! = 1*2 ...N). Полученное число является приближенным значением функции exp в точке X.


#include <iostream>
#include <Windows.h>
#include <cmath>
#include <typeinfo>

using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);


    float x;

    cout << "\n" << "Введите вещественное число: ";
    cin >> x;

    int n;
    cout << "\n" << "Введите целое число: ";
    cin >> n;

    int i = 1;
    int f = 1;
    float pred = 0;
    float res = 0;
    while (i != n + 1){
        f *= i;
        pred = (x * i) / f;
        res += pred;
        i += 1;
  
    }
    res += 1;
    cout << "\n" << "Значение выражения равно: " << res;
 
}

