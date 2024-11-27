#include<iostream>
using namespace std;

void BinarySearch(int arr[], int n,int key){
   
    int low = 0;
    int high = n-1;
    int mid  = (low+high)/2;
    int req_ele;
   
   while (arr[mid] != key){
       
       if(key>arr[mid]){
           low = mid + 1;
           mid = (low+high)/2;
       }
       
       else if (key<arr[mid])
       {
           high = mid - 1;
           mid = (low+high)/2;
       }
       
   }
   
  req_ele = mid;
  cout<<req_ele;
   
   
   
    
}

int main (){
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72,91};
    int size = sizeof(arr)/sizeof(int);
    int key;
    cout<<"Enter the key you want to search :"<<endl;
    cin>>key;
    BinarySearch(arr,size,key);
}