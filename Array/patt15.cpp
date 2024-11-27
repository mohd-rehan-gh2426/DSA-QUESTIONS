/*
A B C D E 
A B C D
A B C
A B 
A

*/

#include <iostream>
using namespace std;
int main (){
    
  
    for(int i=0;i<5;i++){
        char a = 65;
        for(int j=5;j>i;j--){
            
        cout<<a<<" ";
        a = a + 1;
        }
        
        cout<<endl;
        // a = 65;
        
    }
}
