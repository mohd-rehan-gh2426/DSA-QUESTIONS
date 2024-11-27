/*
Given a sorted array, arr[] and a number target, you need to find the number of occurrences of target in arr[]. 

Examples :

Input: arr[] = [1, 1, 2, 2, 2, 2, 3], target = 2
Output: 4
Explanation: target = 2 occurs 4 times in the given array so the output is 4.
Input: arr[] = [1, 1, 2, 2, 2, 2, 3], target = 4
Output: 0
Explanation: target = 4 is not present in the given array so the output is 0.
*/


#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        int n = arr.size();
        int start = 0;
        int end = n - 1;
        int first_occurence = 0;
        int last_occurence = 0;
        int count;
        int count1 = 0;
        int count2 = 0;
        
        while(start<=end){
            int mid = start + (end - start) / 2;
            if(arr[mid] == target){
                first_occurence = mid;
                count1++;
                end = mid - 1;
            }
            
            else if(arr[mid]<target){
                start = mid + 1;
            }
            
            else if(arr[mid]>target){
                end = mid - 1;
            }
        }
        
        start = 0;
        end = n - 1;
        
        while(start<=end){
            int mid = start + (end - start) / 2;
            if(arr[mid] == target){
                last_occurence = mid;
                count2++;
                start = mid + 1;
            }
            
            else if(arr[mid]<target){
                start = mid + 1;
            }
            
            else if(arr[mid]>target){
                end = mid - 1;
            }
        }
        
        if((count1 != 0 && count2 != 0)){
             count = (last_occurence - first_occurence) + 1;
            
        }
        
        else{
            count = 0;
        }
       
        return count;
    }
};

