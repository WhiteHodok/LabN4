#include <iostream>
#include <ctime>

using namespace std;

const int SIZE1 = 5;
const int SIZE2 = 7;

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr1[SIZE1];
    int arr2[SIZE2];
    int merged[SIZE1 + SIZE2];

    // Заполнение массивов случайными числами
    srand(time(nullptr));
    for (int i = 0; i < SIZE1; i++) {
        arr1[i] = rand() % 10;
    }
    for (int i = 0; i < SIZE2; i++) {
        arr2[i] = rand() % 10;
    }

    // Объединение массивов
    for (int i = 0; i < SIZE1; i++) {
        merged[i] = arr1[i];
    }
    for (int i = 0; i < SIZE2; i++) {
        merged[SIZE1 + i] = arr2[i];
    }

    // Вывод результирующего массива на экран
    cout << "Merged array: ";
    printArray(merged, SIZE1 + SIZE2);

    return 0;
}
