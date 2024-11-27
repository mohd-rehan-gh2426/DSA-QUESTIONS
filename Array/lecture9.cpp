#include <iostream>
using namespace std;

bool search(int arr[], int size, int key){
	for(int i=0;i<size;i++){
		if(arr[i]==key){
			return 1;
		}
		
	}
	
	return 0;
}
int main (){
	
	int arr[10] = {4,1,9,0,-3,5,21,2,7,6};
	int key;
	cout<<"Enter the element to search for:";
	cin>>key;
	
	bool found = search(arr,10,key);
	if(found){
		cout<<"key is present in array";
	}
	
	else{
		cout<<"key is not present in array";
	}
}
