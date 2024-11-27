/*

A
B B
C C C 
D D D D 
E E E E E

*/

#include <iostream>
using namespace std;
int main (){
   
    char a = 65;
    for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
            
            char x = (a+i);
            cout<<x<<" ";
            
        }
        
        cout<<endl;
    }
}
