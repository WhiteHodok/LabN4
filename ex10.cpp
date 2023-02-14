#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int ROWS = 3;
const int COLS = 4;

int main() {
    int matrix[ROWS][COLS];
    srand(time(nullptr));
    int sum = 0;
    int minVal = INT_MAX;
    int maxVal = INT_MIN;

    // заполнение и вывод двумерного массива
    cout << "Matrix:\n";
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            matrix[i][j] = rand() % 100;
            cout << matrix[i][j] << "\t";
            sum += matrix[i][j];
            if (matrix[i][j] < minVal) {
                minVal = matrix[i][j];
            }
            if (matrix[i][j] > maxVal) {
                maxVal = matrix[i][j];
            }
        }
        cout << endl;
    }

    // вывод результата
    cout << "Sum: " << sum << endl;
    cout << "Min value: " << minVal << endl;
    cout << "Max value: " << maxVal << endl;

    return 0;
}
