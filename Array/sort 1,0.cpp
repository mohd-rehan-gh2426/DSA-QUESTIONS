#include <iostream>
using namespace std;

void SortArray(int arr[] , int  size){
    int i=0;
    int j=size-1;
    
    while(i<=j){
        
        if(arr[i]==0){
        i++;
    }
    
    else if(arr[j]==1){
        j--;
    }
    
    else if(arr[i]==1 && arr[j]==0){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
        
    }
    
    cout<<"Sorted Array is :"<<endl;
    for(int q=0;q<size;q++){
        cout<<arr[q]<<" ";
    }
    
    
}

int main (){
    
    int size;
    cout<<"Enter the size of array :";
    cin>>size;
    
    cout<<endl;
    
    int arr[50];
    cout<<"Enter the value in Array :"<<endl;
    
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    
    cout<<"Unsorted Array is :"<<endl;
    
     for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    
    cout<<endl;
    
     SortArray (arr,size);
}
