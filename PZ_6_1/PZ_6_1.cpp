// Дан целочисленный список А размера 10. Вывести элемент Аk, который
// удовлетворяет двойному неравенству A1 < Ak < A10.Если таких элеменотов нет, то вывести 0.

#include <iostream>
#include <Windows.h>
#include <list>

using namespace std;


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    list<int> num;
    list<int> num2;

    srand(time(0));
    for (int i = 0; i < 10; i++) {
        num.push_back(rand() % 100);
    }
    cout << "Список: " << "\n";
    for (int f : num) {
        cout << f << "\t";
    }
    cout << "\n";

    int c = num.front();
    int b = num.back();

    int count = 0;
    cout << "Числа, удовлетворяющее условию: A1 < Ak < A10: " << "\n";
    for (int j : num) {
        if ((j > c) && (j < b)) {
            count += 1;
            num2.push_back(j);
        }
    }

    if (count > 0) {
        for (int j : num2) {
            cout << j << "\t";
        }
    }
    else {
        cout << 0;
    }
}
