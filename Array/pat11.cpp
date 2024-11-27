/*
1
01
101
0101
10101

*/

//My solution
#include <iostream>
using namespace std;
int main () {
	
	int temp;
	for(int i=0; i<5; i++) {
	    
	    if(i%2==0){
	        temp = 1;
	    }
	    
	    else if(i%2==1){
	        temp = 0;
	    }
	    
	    for(int j=0;j<=i;j++){
	        
	     cout<<temp;
	     if(temp==1){
	         temp=0;
	     }
	     
	     else if(temp==0){
	         temp=1;
	     }
	    
	     }
	     cout<<endl;
	    
	    
	}
}

//strivers solution

#include <iostream>
using namespace std;
int main (){
    int start = 1;
    for(int i=0;i<5;i++){
        
        if(i%2==0){
            start = 1;
        }
        
        else{
            start = 0;
        }
        for(int j=0;j<=i;j++){
            cout<<start;
            start = 1 - start;
        }
        
        cout<<endl;
    }
}
