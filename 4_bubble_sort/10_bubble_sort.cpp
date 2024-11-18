#include <iostream>
#include <algorithm>
using namespace std;

void BubbleSort(int arr[], int size)
{
    for (int i = 0; i < (size - 1); i++)
    {
        for (int j = 0; j < ((size - 1) - i); j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    for (int k = 0; k < size; k++)
    {
        cout << arr[k] << " ";
    }
}

int main()
{
    int arr[] = {1, 2};
    int size = sizeof(arr) / sizeof(int);
    BubbleSort(arr, size);
}