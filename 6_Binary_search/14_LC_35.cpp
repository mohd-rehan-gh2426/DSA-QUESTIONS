/*
Given a sorted array of distinct integers and a target value, return the index if the target is found. If not,
 return the index where it would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity.

 

Example 1:

Input: nums = [1,3,5,6], target = 5
Output: 2
Example 2:

Input: nums = [1,3,5,6], target = 2
Output: 1
Example 3:

Input: nums = [1,3,5,6], target = 7
Output: 4
 

Constraints:

1 <= nums.length <= 104
-104 <= nums[i] <= 104
nums contains distinct values sorted in ascending order.
-104 <= target <= 104*/

/*
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int start = 0;
        int end = n-1;
        

        while(start<=end){

            int mid = start + (end - start) / 2;
            if(nums[mid]==target){
                return mid;
            }

            else if(nums[mid]<target){
                start = mid + 1;
            }

            else if(nums[mid]>target){
                end = mid - 1;
            }
        }

        // If target is not found, return the position where it should be inserted.


        return start;

        //Atlast the mid,start and end will be point to same index 
        //And start<=end the while loop will iterate one more time
        //And the target value will definetely greater than the start which is also mid now.
        //So target>arr[mid], so start will be mid + 1;
        // And that start will be it's right position.


    
}

};
*/


// Approach I tried pushing the new element, then sort the array then find the index of pushed element
// Although code was running fine but its complex.