#include <iostream>
using namespace std;

int BinarySearch(int arr[], int size, int target){
    int start = 0;
    int end = size - 1;
    
    while(start <= end){
        int mid = start + (end - start) / 2;
        
        if(target == arr[mid])
        return mid;
        
        else if(target < arr[mid])
        end = mid - 1;
        
        else if(target > arr[mid])
        start = mid + 1;
    }
    
    return -1;
}
int main (){
    int arr[] = {2, 3, 4, 10, 40};
    int target;
    int size = sizeof(arr)/sizeof(int);
    cout<<"Enter the value you want to search :"<<endl;
    cin>>target;
    
    int req_ele_index = BinarySearch(arr,size,target);
    cout<<req_ele_index;
}