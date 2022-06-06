// Дан список размера N, все элементы которого, кроме первого, упорядочены по возрастанию. Сделать упорядоченным,
// переместив первый элемент на новую позицию.

#include <iostream>
#include <Windows.h>
#include <list>
#include <algorithm>
#include <time.h>

using namespace std;


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    list<int> num;
    int n;
    try {
        cout << "\n" << "Введите размер списка: ";
        cin >> n;
        if ((n < 0) || (n == 0)){
            throw("Меньше или равно нулю");
        }
    }
    catch (...) {
        cout << "Ввели не то... ";

    }
  
    srand(time(0));
    for (int i = 0; i < n; i++) {
        num.push_back(rand() % 100);
    }

    cout << "\n";
    cout << "Начальный список" << "\n";
    for (int f : num) {
        cout << f << "\t";

    }
    int c = num.front();
    num.pop_front();


    num.sort();


    num.push_front(c);
    cout << "\n";
    cout << "Список со всеми отсортированными элементами, кроме первого" << "\n";
    for (int f : num) {
        cout << f << "\t";
    }

    num.sort();
    cout << "\n";
    cout << "Список отсортированный полностью" << "\n";
    for (int f : num) {
        cout << f << "\t";
    }

}