#include <iostream>
#include <algorithm>
using namespace std;

void SelectionSort(int arr[], int size)
{
    int n = size;
    for (int i = 0; i < n - 1; i++)
    {
        int index = i; // We are assuming that the first element is the smallest

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[index]) /*This if is finding the smallest element*/
            {
                index = j; // if it is found then it is defing it as smallest
            }                                                   
        }

        swap(arr[index], arr[i]); /*swapping the smallest element element with the first element*/
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {4, 2, 1, 3, 5};
    int size = sizeof(arr) / sizeof(int);
    SelectionSort(arr, size);
}