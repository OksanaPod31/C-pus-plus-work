// Описать функцию PowerA234(A, B, C, D),вычисляющую вторую, третью и четвёртую степень числа А и возвращающую эти
//степени соответственно в переменные B, C и D(A - входной, B, C, D - выходные параметры; все параметры являются
// вещественными).С помощью этой функции найти вторую, третью, четвёртую степень пяти данных чисел.

#include <iostream>
#include <Windows.h>
#include <cmath>

using namespace std;
void PowerA234(float a, float &b, float &c, float &d) {

    b = pow(a, 2);
    c = pow(a, 3);
    d = pow(a, 4);
    
}
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    float x, y, z;
    float a;
    cout << "Введите вещественное число: ";
    cin >> a;
 
    PowerA234(a, x, y, z);
    cout <<"Степень 2: "<< x<<"\n";
    cout << "Степень 3: " << y << "\n";
    cout << "Степень 4: " << z << "\n";
   

}