// Учебный проект для занатия
// от 24 февраля 2023 г.

#include <iostream>
using std::cout;
using std::endl;

// Функция вывода 1-мерного массива на экран
void show_1d_array(int m[], short sz)
{
    cout << m << endl;
    // Цикл вывода 1-мерного массива
    for (int i = 0; i < sz; i++)
        cout << m[i] << ' ';
    cout << endl;
}

int main()
{
    const short SIZE = 20;
    int mas[SIZE]{};
    cout << mas << endl;
    show_1d_array(mas, SIZE);
}
