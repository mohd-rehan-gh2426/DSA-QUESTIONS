/*
Suppose an array of length n sorted in ascending order is rotated between 1 and n times. For example, the array nums = [0,1,2,4,5,6,7] might become:

[4,5,6,7,0,1,2] if it was rotated 4 times.
[0,1,2,4,5,6,7] if it was rotated 7 times.
Notice that rotating an array [a[0], a[1], a[2], ..., a[n-1]] 1 time results in the array [a[n-1], a[0], a[1], a[2], ..., a[n-2]].

Given the sorted rotated array nums of unique elements, return the minimum element of this array.

You must write an algorithm that runs in O(log n) time.

 

Example 1:

Input: nums = [3,4,5,1,2]
Output: 1
Explanation: The original array was [1,2,3,4,5] rotated 3 times.
Example 2:

Input: nums = [4,5,6,7,0,1,2]
Output: 0
Explanation: The original array was [0,1,2,4,5,6,7] and it was rotated 4 times.
Example 3:

Input: nums = [11,13,15,17]
Output: 11
Explanation: The original array was [11,13,15,17] and it was rotated 4 times. 
 

Constraints:

n == nums.length
1 <= n <= 5000
-5000 <= nums[i] <= 5000
All the integers of nums are unique.
nums is sorted and rotated between 1 and n times.

*/

#include <iostream>
using namespace std;

int MinimumInRotatedSortedArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    // Handle the case where the array is not rotated
    if (arr[start] <= arr[end]) {
        return arr[start];
    }

    while (start <= end) {
        int mid = start + (end - start) / 2;

        // Check if mid is the minimum element
        if (mid > 0 && arr[mid] < arr[mid - 1]) {
            return arr[mid];
        }

        // Check if mid+1 is the minimum element
        if (mid < size - 1 && arr[mid] > arr[mid + 1]) {
            return arr[mid + 1];
        }

        // Adjust search range
        if (arr[mid] >= arr[start]) {
            // Minimum is in the right half
            start = mid + 1;
        } else {
            // Minimum is in the left half
            end = mid - 1;
        }
    }

    return -1; // This will never be reached if input is valid
}

int main() {
    int arr[] = {3, 4, 5, 1, 2};
    int size = sizeof(arr) / sizeof(int);
    int req_ele = MinimumInRotatedSortedArray(arr, size);

    cout << req_ele;

    return 0;
}