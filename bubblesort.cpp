#include <iostream>
using namespace std;

// void bubblesort(int arr[], int n) {
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = 0; j < n - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {

//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
// }

void insertionSort(int array[], int size)
{
    for (int step = 1; step < size; step++)
    {
        int key = array[step];
        int j = step - 1;

        while (j >= 0 && key < array[j])
        {
            array[j + 1] = array[j];
            --j;
        }
        array[j + 1] = key;
    }
}

void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int d[] = {5, 1, -2, 8, 0};
    int size = sizeof(d) / sizeof(d[0]);

    cout << "Before insertion sort:" << endl;
    printarray(d, size);

    // bubblesort(d, size);
    insertionSort(d, size);

    cout << "THE SORTED ARRAY IS: " << endl;
    printarray(d, size);

    return 0;
}
