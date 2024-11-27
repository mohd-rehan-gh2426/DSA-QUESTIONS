#include<iostream>
using namespace std;
int main (){
    for(int i=0;i<=4;i++){
        for(int j=0;j<(5-i);j++){
            cout<<"*";
        }
        
        for(int j=0;j<2*i;j++){
            cout<<" ";
        }
        
        for(int j=0;j<(5-i);j++){
            cout<<"*";
        }
        cout<<endl;
    }
   
    
    for(int k=1;k<=5;k++){
        for(int l=1;l<=k;l++){
            cout<<"*";
        }
        
        for(int l=0;l<(5-k)*2;l++){
            cout<<" ";
        }
        
        for(int l=1;l<=k;l++){
            cout<<"*";
        }
        cout<<endl;
    }
}

