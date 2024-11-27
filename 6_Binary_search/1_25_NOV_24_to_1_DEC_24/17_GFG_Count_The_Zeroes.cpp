/*
Given an array arr of only 0's and 1's. The array is sorted in such a manner that all the 1's are placed first and then they are followed by all the 0's. Find the count of all the 0's.

Examples:

Input: arr[] = [1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0]
Output: 3
Explanation: There are 3 0's in the given array.
Input: arr[] = [0, 0, 0, 0, 0]
Output: 5
Explanation: There are 5 0's in the array.
*/


class Solution {
  public:
    int countZeroes(vector<int> &arr) {
        sort(arr.begin(),arr.end());
        int n = arr.size();
        
        int start = 0;
        int end = n - 1 ;
        int mid;
        int count;
        int first_occ;
        int last_occ;
        
        while(start<=end){
          mid = start + (end - start) / 2;
          
          if(arr[mid] == 0){
              first_occ = mid;
              end = mid - 1;
              
          }
          
          else{
              end = mid - 1;
          }
        }
        
        start = 0;
        end = n - 1;
        
         while(start<=end){
          mid = start + (end - start) / 2;
          
          if(arr[mid] == 0){
              last_occ = mid;
              start = mid + 1;
              
          }
          
          else{
              end = mid - 1;
          }
        }
        
        count = (last_occ - first_occ) + 1;
        return count;
    }
};