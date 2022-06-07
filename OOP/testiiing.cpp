// testiiing.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>

using namespace std;

class Point3d{
private:
    int m_x;
    int m_y;
    int m_z;
public: // члены класса открыты, к ним можно получить доступ напрямую через main().
    Point3d() {}

    void setValues(int m_x, int m_y, int m_z) {
        this->m_x = m_x;
        this->m_y = m_y;
        this->m_z = m_z;
    }
    void print_Point3d() {
        cout << "Координаты точки: " << "\n";
        cout << m_x << " " << m_y << " " << m_z << endl;
    }
  
}; 


int main()
{

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

  
    Point3d first;
    Point3d second;
    first.setValues(10, 22, 3);
    first.print_Point3d();

    second.setValues(39, 56, 33);
    second.print_Point3d();
    
}

