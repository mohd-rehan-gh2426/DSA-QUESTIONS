/*
 1------1
 12----21
 123--321
 12344321
*/

#include<iostream>
using namespace std;
int main (){
    int space = 2*(4-1);
    for(int i=1;i<5;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        
        for(int j=1;j<=space;j++){
            cout<<"-";
        }
        
       for(int j=i;j>=1;j--){
           cout<<j;
       }
        
        cout<<endl;
        space = space - 2;
    }
}
