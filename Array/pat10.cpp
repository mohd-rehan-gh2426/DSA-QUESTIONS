/*

*
**
***
****
*****
****
***
**
*


*/

#include<iostream>
using namespace std;

void print_pat2(){
    for(int i=0;i<4;i++){
        for(int j=0;j<(4-i);j++){
            cout<<"*";
        }
        
        cout<<endl;
    }
}

void print_pat1(){
    
    for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        
        cout<<endl;
    }
    
    print_pat2();
    
}
int main(){
    
    print_pat1();
    
}
