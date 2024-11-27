/*
Given an array arr of positive integers sorted in a strictly increasing order, and an integer k.

Return the kth positive integer that is missing from this array.

 

Example 1:

Input: arr = [2,3,4,7,11], k = 5
Output: 9
Explanation: The missing positive integers are [1,5,6,8,9,10,12,13,...]. The 5th missing positive integer is 9.
Example 2:

Input: arr = [1,2,3,4], k = 2
Output: 6
Explanation: The missing positive integers are [5,6,7,...]. The 2nd missing positive integer is 6.
 
*/

// SOLUTION WITHOUT BINARY SEARCH

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int MissingCount = 0;
        int LastNumber = 0; // it will track the last number which we use. (in array or beyond array)

        for(int i = 0;i<arr.size();i++){
            MissingCount = arr[i] - (i + 1); // For each element arr[i], the number of missing elements
            // up to arr[i] can be calculated as arr[i] - (i + 1). This difference gives 
            //us how many integers are missing before that index.
           

            if(MissingCount>=k){
                return i + k; // Jis index tak missing count ki value k ya ke se badi ho usi index mei K add karenge
                //toh hume Kth element mil jayega.
            }

             LastNumber = arr[i]; //Updating last number for usecase in case the missing element we are finding is beyond the last element of the array. 
        }
        
        //In case kth missing elemnt is beyond the last element of array.
        return LastNumber + k - MissingCount; // substracting Missing count in case some elements are missing within the array.


        
    }
};


//SOLUTION WITH BINARY SEARCH

#include <iostream>
#include <vector>
using namespace std;

int findKthPositive(vector<int>& arr, int k) {
    int left = 0, right = arr.size() - 1;
    
    // Perform binary search
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        // Calculate the number of missing integers up to arr[mid]
        int missingCount = arr[mid] - (mid + 1);
        
        if (missingCount < k) {
            // If missingCount is fewer than k missing numbers, move to the right
            left = mid + 1;
        } else {
            // Otherwise (greater than or equal to k), move to the left
            right = mid - 1;
        }
    }
    
    // After the break of while loop, left is the index where the kth missing number would be
    return left + k;
}

int main() {
    vector<int> arr = {2, 3, 4, 7, 11};
    int k = 5;
    cout << "The " << k << "th missing positive integer is: " << findKthPositive(arr, k) << endl;
    return 0;
}
