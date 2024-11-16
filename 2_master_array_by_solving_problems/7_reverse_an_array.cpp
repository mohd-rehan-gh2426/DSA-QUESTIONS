#include <iostream>
#include <algorithm>
using namespace std;

void reverse_array(int arr[], int arr_size)
{
    for (int i = 0, j = arr_size - 1; i <= j; i++, j--)
    {
        swap(arr[i], arr[j]); // swap function comes under #include<algorithm> library
    }

    for (int i = 0; i < arr_size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {9, 8, 7, 6, 2, 1, 3};
    int arr_size = sizeof(arr) / sizeof(int);
    reverse_array(arr, arr_size);
}