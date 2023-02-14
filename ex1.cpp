#include <iostream>
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

    // Display 
    for (int i = 0; i < ARRAY_SIZE; i++) {
        cout << myArray[i] << " ";
    }
    cout << endl;

    return 0;
}
