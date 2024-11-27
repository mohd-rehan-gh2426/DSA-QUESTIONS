/*
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15 16


*/

#include<iostream>
using namespace std;
int main (){
    int start = 1;
    
    for(int i=1;i<=6;i++){
        
      for(int j=0;j<i;j++){
          
          cout<<(start + j)<<" ";
          
          
      }
      
      cout<<endl;
      start = start + i;
       
    }
}
