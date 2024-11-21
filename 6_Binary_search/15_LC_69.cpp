/*
Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.

You must not use any built-in exponent function or operator.

For example, do not use pow(x, 0.5) in c++ or x ** 0.5 in python.
 

Example 1:

Input: x = 4
Output: 2
Explanation: The square root of 4 is 2, so we return 2.
Example 2:

Input: x = 8
Output: 2
Explanation: The square root of 8 is 2.82842..., and since we round it down to the nearest integer, 2 is returned.
 */

//MY_APPROACH (SUBMITTED ON LEETCODE)

/*
class Solution {
public:
    int mySqrt(int x) {

        int start = 1;
        int end = x;
        
        while(start<=end){
            int mid = start + (end - start)/2;
            long long Square1 = static_cast <long long> (mid)*mid;
            long long Square2 = static_cast<long long>(mid + 1)*(mid + 1);

            if((x == Square1) || ((x > Square1)&&(x < Square2))){
                return mid;
            }

            else if(x < Square1){
                end = mid - 1;
            }

            else if(x > Square1){
                start = mid + 1;
            }
        }
        return 0;
    }
};
*/



//BETTER APPROACH
/*
class Solution {
public:
    int mySqrt(int x) {
        if (x < 2) return x;  // Handle small numbers directly

        int start = 1, end = x;
        
        while (start <= end) {
            int mid = start + (end - start) / 2;
            long long square = static_cast<long long>(mid) * mid;

            if (square == x) {
                return mid;
            } 
            else if (square < x) {
                start = mid + 1;
            } 
            else if(square > x){
                end = mid - 1;
            }
        }
        
        return end; // 'end' will be the floor of the square root
    }
};
*/

//Atlast start, end and mid will point to same eleemtn
// due to start<=end condition while loop will iterate one more time.
//and this time square > x condition will run always.
// So at return end; statement the floor of the square root will bw returned
