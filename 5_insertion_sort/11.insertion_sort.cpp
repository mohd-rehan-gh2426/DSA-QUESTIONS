#include <iostream>
#include <algorithm>
using namespace std;

void InsertionSort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (arr[j] < arr[j - 1])
            {
                swap(arr[j], arr[j - 1]);  // element ko sahi place par place karna.
            }

            else
            {
                break;
            }
        }
    }

    for (int l = 0; l < size; l++)
    {
        cout << arr[l] << " ";
    }
}

int main()
{
    int arr[] = {4, 3, 5, 2, 1};
    int size = sizeof(arr) / sizeof(int);
    InsertionSort(arr, size);
}