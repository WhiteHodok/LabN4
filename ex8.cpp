#include <iostream>
#include <vector>

using namespace std;

int main() {
    int arr[] = {1, 2, 3, 3, 4, 5, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> uniqueArr;

    for (int i = 0; i < n; i++) {
        bool isDuplicate = false;

        for (int j = 0; j < uniqueArr.size(); j++) {
            if (arr[i] == uniqueArr[j]) {
                isDuplicate = true;
                break;
            }
        }

        if (!isDuplicate) {
            uniqueArr.push_back(arr[i]);
        }
    }

    for (int i = 0; i < uniqueArr.size(); i++) {
        cout << uniqueArr[i] << " ";
    }

    return 0;
}
