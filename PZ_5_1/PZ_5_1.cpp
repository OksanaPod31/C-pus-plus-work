// Составить программу, в которой функция генерирует четырёхзначное число и определяет, есть ли в числе одинаковые цифры.
//

#include <iostream>
#include <Windows.h>

using namespace std;

void action(int num) {
    int f = num;
    int c = num % 10;
    num /= 10;
    int a = num % 10;
    num /= 10;
    int b = num % 10;
    num /= 10;
    int d = num % 10;


    if ((c == a) || (c == b) || (c == d) || (a == b) || (a == d) || (b == d)) {
        cout << "В сгенерированном числе есть одинаковые цифры";
    }
    else {
        cout << "В сгенерированном числе нет одинаковых цифр";
    }

}
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "Hello World!\n";
    srand(time(0));
    int n = rand() % 10000;
    cout << "Сгенерированное число: " << n << "\n";

    action(n);
}

