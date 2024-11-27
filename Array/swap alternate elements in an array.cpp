/*#include <iostream>
using namespace std;
int main (){
	int arr[] = {4,9,8,1,2,5};
	int size = 6;
	
	cout<<"Original Array :";
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	 
	 cout<<endl;
	 	
	for(int i=0;i<size;i++){
		if (i+1 < size){
			swap(arr[i],arr[i+1]);
		}
	}
	
	cout<<"Altered Array :"<<endl;
	
	for(int i = 0;i<size-1;i=i+2)
	{
		cout<<arr[i]<<" ";
	}
}*/

#include <iostream>
using namespace std;

int main() {
    int arr[] = {4, 9, 8, 1, 2, 5};
    int size = sizeof(arr) / sizeof(arr[0]);  // Dynamically calculate the size of the array
    
    cout << "Original Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    // Swap alternate elements
    for (int i = 0; i < size - 1; i += 2) {
        swap(arr[i], arr[i + 1]);
    }
    
    cout << "Altered Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}

