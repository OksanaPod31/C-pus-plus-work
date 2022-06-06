// Даны целые положительные числа A и B (A < B). Вывести все целые числа от A до B включительно; при этом каждое число
// должно выводиться столько раз, каково его значение(например, число 3 выводится 3 раза).


#include <iostream>
#include <Windows.h>

using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

  
    int k = 0;
    int c = 0;
    int a;
    int b;
    cout << "Введите целое положительное число: ";
    cin >> a;

    cout << "Введите целое положительное число, что больше предыдущего: ";
    cin >> b;

    int i = a;
    while (i != b + 1) {
        int s = i;
        while (s) {
            cout << i << "\t";
            s -= 1;
        }
        i += 1;
    }
            
}
