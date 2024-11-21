/*Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of
 a given target value.

If target is not found in the array, return [-1, -1].

You must write an algorithm with O(log n) runtime complexity.

 

Example 1:

Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]
Example 2:

Input: nums = [5,7,7,8,8,10], target = 6
Output: [-1,-1]
Example 3:

Input: nums = [], target = 0
Output: [-1,-1]
 

Constraints:

0 <= nums.length <= 105
-109 <= nums[i] <= 109
nums is a non-decreasing array.
-109 <= target <= 109*/
/*





class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int start = 0;
        int end = n - 1;
        int first_occ = -1;
        int last_occ = -1;
        int mid;
        vector<int> result;
  
        // checking for first Occurence
        while (start <= end) {
            mid = start + (end - start) / 2;
            if (nums[mid] == target) {
                first_occ = mid;
                end = mid - 1;

            }

            else if (nums[mid] < target) {
                start = mid + 1;
            }

            else if (nums[mid] > target) {
                end = mid - 1;
            }
        }

        result.push_back(first_occ);

        //Checking for second Occurence

        start = 0;
        end = n - 1;

        while (start <= end) {
            mid = start + (end - start) / 2;
            if (nums[mid] == target) {
                last_occ = mid;
                start = mid + 1;

            }

            else if (nums[mid] < target) {
                start = mid + 1;
            }

            else if (nums[mid] > target) {
                end = mid - 1;
            }
        }

        result.push_back(last_occ);

        return result;
    }
};
*/

