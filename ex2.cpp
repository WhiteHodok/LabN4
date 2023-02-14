#include <iostream>
#include <climits> // for INT_MAX and INT_MIN
#include <cstdlib> // for rand() and srand()
#include <ctime>   // for time()

using namespace std;

int main() {
    const int ARRAY_SIZE = 10;
    int myArray[ARRAY_SIZE];

    
    srand(time(0));

    // Fill 
    for (int i = 0; i < ARRAY_SIZE; i++) {
        myArray[i] = rand() % 100; // Generate a random number between 0 and 99
    }

    // Find the sum, minimum, and maximum 
    int sum = 0;
    int min = INT_MAX;
    int max = INT_MIN;
    for (int i = 0; i < ARRAY_SIZE; i++) {
        sum += myArray[i];
        if (myArray[i] < min) {
            min = myArray[i];
        }
        if (myArray[i] > max) {
            max = myArray[i];
        }
    }

    // Display 
    cout << "Sum: " << sum << endl;
    cout << "Minimum: " << min << endl;
    cout << "Maximum: " << max << endl;

    return 0;
}
