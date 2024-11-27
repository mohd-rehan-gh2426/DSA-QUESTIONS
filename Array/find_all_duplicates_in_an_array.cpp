 // run on gdb

#include <iostream>
#include <vector>
#include <algorithm> // for sort

using namespace std;

vector<int> findDuplicates(vector<int>& nums) {

          
       vector<int> ans;
       sort(nums.begin(), nums.end());
       for(int i=0;i<nums.size()-1;i++){
        if(nums[i]==nums[i+1]){
            ans.push_back(nums[i]);
        }
        
    }
        return ans;
        
    }
int main() {
    cout << "Enter the size of an array :" << endl;
    int size;
    cin >> size;

    cout << "Enter the elements in array :" << endl;
    vector<int> arr(size);
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    cout << "The inputted array is :" << endl;
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "All duplicate elements in array are :" << endl;
    vector<int> duplicates = FindUniques(arr);

    for (int num : duplicates) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}






























































#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){
  
  
  vector<vector<int>> ans;

  for(int i=0; i<arr.size();i++){
     for(int j=i+1; j<arr.size();j++){
        if(arr[i]+arr[j] == s){

       if(arr[j]<arr[i]){

        ans.push_back({arr[j] , arr[i]});
        

       }

       else{
        ans.push_back({arr[i], arr[j]});
       }


        

        }
        
     }
  }



return ans;

  }
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  #include <bits/stdc++.h>
using namespace std;

vector<vector<int>> pairSum(vector<int> &arr, int s) {
    vector<vector<int>> ans;

    for (int i = 0; i < arr.size(); i++) {
        for (int j = i + 1; j < arr.size(); j++) { // Fix inner loop condition
            if (arr[i] + arr[j] == s) {
                if (arr[j] < arr[i]) {
                    ans.push_back({arr[j], arr[i]}); // Store pairs as {smaller, larger}
                } else {
                    ans.push_back({arr[i], arr[j]});
                }
            }
        }
    }

    // Optionally, sort the result to ensure pairs are in consistent order
    sort(ans.begin(), ans.end());

    return ans;
}


  


