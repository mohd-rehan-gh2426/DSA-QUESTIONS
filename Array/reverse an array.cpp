// Swapping of relative elements.

#include <iostream>
using namespace std;

void reverse(int arr[], int size){
	for (int i = size - 1, j = 0; i >= size / 2; i--,j++){
		// Swap elements at positions i and j
		
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
}

int main (){
	int a;
	cout<<"Enter the size of an array :";
	cin>>a;
	
	int arr[1000];
	cout<<"Enter the value in the array :"<<endl;
	for (int i = 0; i < a; i++){
		cin >> arr[i];
		
	}
	
	cout<<"Original Array: ";
	for (int i=0; i < a;i++){
		cout << arr[i] << " ";
	}
	
	cout<<endl;
	
	// Reverse the Array
	
	reverse(arr, a);
	
	cout << "Reversed Array :";
	for (int i=0;i<a;i++){
	    cout << arr[i] << " ";	
	}
	
	cout<<endl;
	
	return 0;
}

// my solution

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


