/*
Given an array arr, return the second largest element from an array. If the second largest element doesn't exist then return -1.

Note: The second largest element should not be equal to the first largest.


*/

#include <iostream>
#include <limits.h>
using namespace std;

void getSecondLargest(int arr[], int arr_size)
{

    int max = INT_MIN;
    int ind_max;
    int second_max = -1;
    for (int i = 0; i < arr_size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            ind_max = i;
        }
    }

    for (int i = 0; i < arr_size; i++)
    {
        if (i != ind_max && arr[i] != max)
        {

            if (arr[i] > second_max)
            {
                second_max = arr[i];
            }
        }
    }

    cout << second_max;
}

int main()
{
    int arr[] = {9, 8, 7, 6, 2, 1, 3};
    int arr_size = sizeof(arr) / sizeof(int);
    getSecondLargest(arr, arr_size);
}

/*
GFG CODE:

int getSecondLargest(vector<int> &arr) {
         int max = INT_MIN;
    int ind_max;
    int second_max = -1;
    for(int i=0;i<arr.size();i++){
        if(arr[i]>max){
            max = arr[i];
            ind_max = i;
        }


    }

    for(int i = 0;i<arr.size();i++){
        if(i != ind_max && arr[i] != max){

            if(arr[i]>second_max){
                second_max = arr[i];
            }

        }


    }




         return second_max;


    }



*/
