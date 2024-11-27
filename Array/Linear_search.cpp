/* LINEAR SEARCH: Take an element you want to search as an input and
compare it one by one from all the of an array. */

#include <iostream>
using namespace std;

bool search (int arr[],int size,int key){
	for(int i=0;i<size;i++){
		if (arr[i] == key){
		return 1;
		}
	}
	return 0;
}


int main (){
	int arr[10] = {12,54,34,67,87,11,36,91,33,27};
	// Taking input
	cout<<"Enter the value to search"<<endl;
	
	int key;
	cin>>key;
	bool found = search(arr,10,key);
	
	
	if (found){
		cout<<"The element is found :"<<endl;
	}
	
	else {
		cout<<"The element is not found ";
	}	
} 

