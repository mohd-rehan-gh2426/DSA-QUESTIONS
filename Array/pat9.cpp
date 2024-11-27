/*

    *
   ***
  *****
 *******
*********
*********
 *******
  *****
   ***
    *




*/
#include<iostream>
using namespace std;

 void print_p2(){
     for(int i=0;i<5;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        
        for(int k=0;k<(2*5-(2*i+1));k++){
            cout<<"*";
        }
        
        cout<<endl;
    }
    
    
}

 void print_p1(){
    
     for(int i=0;i<5;i++){
         for(int j=0;j<((5-i)-1);j++){
             cout<<" ";
         }
        
         for(int k=0;k<((2*i)+1);k++){
             cout<<"*";
         }
        
         cout<<endl;
         
    
     }
     
     print_p2();
    
 }

int main (){
    
     
     print_p1();
    
}
