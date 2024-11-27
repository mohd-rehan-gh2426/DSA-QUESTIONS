#include <iostream>
#include <cmath>
using namespace std;
int main (){
    int n;
    cin>>n;
    int dup = n;
    int ans = 0;
    int last_digit;
    int pow_digit;
    
    int digit_count = (int) log10(n) + 1;
    // cout<<digit_count;
    
    while(n != 0){
       last_digit = n % 10;
       pow_digit = pow(last_digit,digit_count);
       ans = ans  + pow_digit;
       n = n / 10;
        
    }
    if(dup == ans){
        cout<<"Armstrong number";
        
    }
    
    else{
        cout<<"Not an Armstrong number";
    }
    // cout<<ans;
}