#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    const int rows = 3;
    const int cols = 4;
    int arr[rows][cols];

    // заполнение массива случайными числами
    srand(time(nullptr));
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] = rand() % 100;
        }
    }

    // вывод массива на экран
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
