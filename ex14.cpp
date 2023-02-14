#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int ROWS = 3;
const int COLS = 4;

int main()
{
    setlocale(LC_ALL,"RUS");
    int arr[ROWS][COLS];
    srand(time(NULL));  // инициализация генератора случайных чисел

    // заполнение массива случайными числами
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            arr[i][j] = rand() % 10;
        }
    }

    // вывод массива на экран
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // нахождение суммы элементов в каждой строке
    for (int i = 0; i < ROWS; i++) {
        int sum = 0;
        for (int j = 0; j < COLS; j++) {
            sum += arr[i][j];
        }
        cout << "Сумма элементов в строке " << i << ": " << sum << endl;
    }

    return 0;
}
