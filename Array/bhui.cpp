#include <iostream>
using namespace std;

void reverseanarray (int arr[],int size){
    int p=0;
    int q=size-1;
    int r=size/2;
    while(q>=r){
    	swap(arr[p],arr[q]);
    	p++;
    	q--;
    	
    
    	
	}
	
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
    
}

int main(){
	
	int arr[100];
	cout<<"Enter the size of an array :"<<endl;
	int size;
	cin>>size;
	cout<<"Enter the elements in array :"<<endl;
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	
	cout<<"Original array :"<<endl;
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	
	cout<<endl;
	
	cout<<"Reversed array :"<<endl;
	
	reverseanarray(arr,size);
	

	
}
