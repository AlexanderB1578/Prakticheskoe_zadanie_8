#include <iostream>

using namespace std;

int main() 
{
    // Настройка корректного отображения русского языка в консоли
    setlocale(LC_ALL, "Russian");

    int a, b; // типа объявляем переменные
    cin >> a >> b; // вводим числа

    if (a > b) // Если число a больше b
    {
        cout << "Большее число: " << a;
    }
    else if (a < b) // Если число a меньше b
    {
        cout << "Большее число: " << b;
    }
    else // Если число a равно b
    {
        cout << "Числа равны";
    }
                        
}