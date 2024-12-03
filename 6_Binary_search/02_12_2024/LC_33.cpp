#include <iostream>
using namespace std;

int SearchInRotatedArray(int arr[], int size, int target) {
    int start = 0;
    int end = size - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        // Check if mid is the target
        if (arr[mid] == target) {
            return mid;
        }

        // Check which part is sorted
        if (arr[start] <= arr[mid]) { // Left part is sorted
        
            if (arr[start] <= target && target < arr[mid]) { // we are using '<' isntead '<=' because we have already checked arr[mid]==target at the start of the loop.
                
                end = mid - 1; // Target lies in the left part
                
            } else {
                
                start = mid + 1; // Target lies in the right part
                
            }
        } else { // Right part is sorted
        
            if (arr[mid] < target && target <= arr[end]) {
                
                start = mid + 1; // Target lies in the right part
                
            } else {
                
                end = mid - 1; // Target lies in the left part
            }
        }
    }

    return -1; // Target not found
}

int main() {
    int arr[] = {3, 4, 5, 6, 1, 2};
    int size = sizeof(arr) / sizeof(int);
    int target;
    cin >> target;

    int req_index = SearchInRotatedArray(arr, size, target);
    cout << req_index;
    return 0;
}
