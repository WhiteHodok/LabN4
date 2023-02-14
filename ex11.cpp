#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int ROWS = 3;
const int COLS = 4;

void fillArray(int arr[][COLS], int rows, int cols) {
    srand(time(NULL));
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            arr[i][j] = rand() % 10 + 1; // случайные числа от 1 до 10
        }
    }
}

void printArray(int arr[][COLS], int rows, int cols) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}

void averageRow(int arr[][COLS], int rows, int cols) {
    for(int i = 0; i < rows; i++) {
        double sum = 0;
        for(int j = 0; j < cols; j++) {
            sum += arr[i][j];
        }
        double average = sum / cols;
        cout << "Average of row " << i+1 << ": " << average << endl;
    }
}

int main() {
    int arr[ROWS][COLS];
    fillArray(arr, ROWS, COLS);
    printArray(arr, ROWS, COLS);
    averageRow(arr, ROWS, COLS);
    return 0;
}
