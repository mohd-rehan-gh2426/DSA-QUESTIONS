#include<iostream>
using namespace std;
int main (){
    for(int i=1;i<=5;i++){
        if(i==1 || i==5){
            for(int j=1;j<=4;j++){
                cout<<"*";
            }
        }
        
        else{
            for(int j=1;j<=4;j++){
                if(j==1 || j==4){
                    cout<<"*";
                }
                
                else{
                    cout<<" ";
                }
            }
        }
        
        
        cout<<endl;
    }
}
