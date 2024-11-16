/*
Given an array arr, rotate the array by one position in clock-wise direction.

Examples:

Input: arr = [1, 2, 3, 4, 5]
Output: [5, 1, 2, 3, 4]
Explanation: If we rotate arr by one position in clockwise 5 come to the front and remaining those are shifted to the end.
Input: arr = [9, 8, 7, 6, 4, 2, 1, 3]
Output: [3, 9, 8, 7, 6, 4, 2, 1]
Explanation: After rotating clock-wise 3 comes in first position.
*/


/*


class Solution {
  public:
    void rotate(vector<int> &arr) {
          int size = arr.size();
        
        // Create a new array (vector) to store the rotated values
        vector<int> arr2(size);
        
        for (int i = 0; i < size; i++) {
            if (i == size - 1) {
                arr2[0] = arr[i];  // Move the last element to the front
            } else {
                arr2[i + 1] = arr[i];  // Shift elements one position to the right
            }
        }
        
        // Copy the rotated array back to the original array
        for (int i = 0; i < size; i++) {
            arr[i] = arr2[i];
        }
        
        
    }
    };



*/