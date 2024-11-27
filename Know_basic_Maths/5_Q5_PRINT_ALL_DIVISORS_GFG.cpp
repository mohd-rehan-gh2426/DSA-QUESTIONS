/*
Given a positive integer n, The task is to find the value of Σi from 1 to n F(i)
where function F(i) for the number i is defined as the sum of all divisors of i.

Examples:

Input: n = 4
Output: 15
Explanation:
F(1) = 1
F(2) = 1 + 2 = 3
F(3) = 1 + 3 = 4
F(4) = 1 + 2 + 4 = 7
So, F(1) + F(2) + F(3) + F(4)
    = 1 + 3 + 4 + 7 = 15


Input: n = 5
Output: 21
Explanation:
F(1) = 1
F(2) = 1 + 2 = 3
F(3) = 1 + 3 = 4
F(4) = 1 + 2 + 4 = 7
F(5) = 1 + 5 = 6
So,  F(1) + F(2) + F(3) + F(4) + F(5)
    = 1 + 3 + 4 + 7 + 6 = 21


Input: n = 1
Output: 1
Explanation:
F(1) = 1
So,  F(1) = 1 
 */


#include <iostream>
using namespace std;

int main (){
    int n;
    cin>>n;
    int sum = 0;
    
    for(int i = 1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(i%j == 0){
                sum = sum + j;
            }
        }
    }
    
    cout<<sum;
}