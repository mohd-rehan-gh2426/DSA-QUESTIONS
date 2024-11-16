#include <iostream>
#include<limits.h>
using namespace std;
int main (){
    int arr[] = {544,12,76,33,21};
    int ans = INT_MIN;
    for(int i=0;i<sizeof(arr)/sizeof(int);i++){
        if(arr[i]>ans){
            ans = arr[i];
        }
    }
    
    cout<<ans;
}