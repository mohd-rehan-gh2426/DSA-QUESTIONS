// first approach :-- Brute approach 

#include<iostream>
#include<climits>
using namespace std;

int getMin(int arr[], int n){
	
	int min = INT_MAX;
	for (int i=0; i<n; i++){
		int min = INT_MAX;
		for(int i=0;i<n;i++){
			if (arr[i]<min){
				min = arr[i];
			}
		}
		
		return min;
	}
}





int getMax (int arr[], int n)
{
	int max = INT_MIN;
	for (int i=0;i<n;i++)
	{
		if (arr[i]>max){
			max=arr[i];
		}
	}
	return max;
}



int main ()
{
	int size;
	cout<<"Enter the size of an array :"<<endl;
	cin>>size;
	
	int num [1000]; // it will be a good practice to not use variable like num[n].
	
	// taking input in an array.
	
	for (int i=0;i<size;i++)
	{
		cin>>num[i];
		
	}
	
	cout<<"Maximum value is :"<<getMax(num,size)<<endl;
	cout<<"Minimum value is :"<<getMin(num,size)<<endl;
}

//Second approach :-- By using built in Functions

#include <iostream>
#include <climits>
using namespace std;



int getMax(int num[],int n){
	int maxi = INT_MIN;
	for(int i=0;i<n;i++){
		maxi = max(maxi,num[i]);
	}
	
	return maxi;
}

int getMin (int num[], int n){
	int mini = INT_MAX;
	for (int i=0; i<n;i++){
		mini = min(mini,num[i]);
	
	}
	return mini;
}



int main ()
{
	
		int size;
	cout<<"Enter the size of an array :"<<endl;
	cin>>size;
	
	int num [1000]; // it will be a good practice to not use variable like num[n].
	
	// taking input in an array.
	
	for (int i=0;i<size;i++)
	{
		cin>>num[i];
		
	}
	
	cout<<"Maximum value is :"<<getMax(num,size)<<endl;
	cout<<"Minimum value is :"<<getMin(num,size)<<endl;
	
}


