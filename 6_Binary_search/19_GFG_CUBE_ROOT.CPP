/*
Given a number N, find the cube root of N.

Note: We need to print the floor value of the result.

 

Example 1:

Input:
N = 3
Output:
1
Explanation:
Cube root of 3 is 1.442 = 1
Example 2:

Input:
N = 8
Output:
2
Explanation:
Cube root of 8 is 2
*/

class Solution {
  public:
    int cubeRoot(int N) {
        if(N<2){
            return N;
        }
        int start = 1;
        int end = N;
        
        while(start <= end){
            int mid = start + (end - start) / 2;
            long long cube = static_cast<long long>(mid) * mid * mid;

            
            if(cube == N){
                return mid;
            }
            
            else if(cube < N){
                start = mid + 1;
            }
            
            else if(cube > N){
                end = mid - 1;
    }        
    }
    
    return end;
    }
};
