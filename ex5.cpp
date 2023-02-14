#include <iostream>

using namespace std;



int main()
{
    setlocale(LC_ALL,"RUS");
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 30; // искомое число
    int index = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            index = i;
            break;
        }
    }

    if (index == -1)
    {
        cout << "Число " << x << " не найдено" << endl;
    }
    else
    {
        cout << "Число " << x << " найдено в ячейке " << index << endl;
    }

    return 0;
}
