#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int ARRAY_SIZE = 10;

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

double calculateAverage(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return (double)sum / size;
}

int main() {
    int arr[ARRAY_SIZE];

    // Заполнение массива случайными числами
    srand(time(NULL));
    for (int i = 0; i < ARRAY_SIZE; i++) {
        arr[i] = rand() % 100;
    }

    cout << "Array:" << endl;
    printArray(arr, ARRAY_SIZE);

    double average = calculateAverage(arr, ARRAY_SIZE);
    cout << "Average: " << average << endl;

    return 0;
}
