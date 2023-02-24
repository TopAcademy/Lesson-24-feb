// Учебный проект для занатия
// от 24 февраля 2023 г.

#include <iostream>
using std::cout;
using std::endl;

int main()
{
    const short ROWS = 3;
    const short COLS = 5;
    int mas[ROWS][COLS]{};
    int i, j;
    // Цикл вывода 2-мерного массива
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++)
            cout << mas[i][j] << '\t';
        cout << endl;
    }
}
