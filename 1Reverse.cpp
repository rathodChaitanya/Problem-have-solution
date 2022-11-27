#include <iostream>
using namespace std;

void reverseArray(int arr[], int size)
{
    int temp;
    for (int i = 0; i < size / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[(size - 1) - i];
        arr[(size - 1) - i] = temp;
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};

    int size = sizeof(arr) / sizeof(int);
    cout << "size of array is " << size << endl;

    // before reverse
    cout << "Before the reverse the array: ";
    printArray(arr, size);

    // reverse
    reverseArray(arr, size);

    // after reverse
    cout << "After the reverse the array: ";
    printArray(arr, size);

    return 0;
}