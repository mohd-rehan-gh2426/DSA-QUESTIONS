/*
Given an array, arr of n integers, and an integer element x,
find whether element x is present in the array. Return the
 index of the first occurrence of x in the array, or -1 if it doesn't exist.
*/

#include <iostream>
using namespace std;

int search_element(int arr[], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        if (m == arr[i])
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int arr[5] = {13, 65, 36, 90, 22};
    int size = sizeof(arr) / sizeof(int);
    int req_ele;
    cout << "Enter the element you want to search in array :";
    cin >> req_ele;
    int ans = search_element(arr, size, req_ele);

    cout << ans;
}