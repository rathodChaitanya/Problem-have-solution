#include <iostream>
using namespace std;

int Min(int arr[], int size)
{
    int min = 0;

    if (size >= 2)
    {
        min = arr[0] < arr[1] == 1 ? arr[0] : arr[1];
    }

    for (int i = 2; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int Max(int arr[], int size)
{
    int max = 0;

    if (size >= 2)
    {
        max = arr[0] > arr[1] == 1 ? arr[0] : arr[1];
    }

    for (int i = 2; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
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
    cout << "the array: ";
    printArray(arr, size);

    // reverse
    cout << "Min number is " << Min(arr, size) << endl;
    cout << "Max number is " << Max(arr, size) << endl;

    return 0;
}