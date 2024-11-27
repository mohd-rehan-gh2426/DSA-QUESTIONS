/* APPROACH 1 : Can you use frequency of 0s, 1s and 2s to find the solution?*/

#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
  int count0=0,count1=0,count2=0;

  for(int i =0;i<n;i++){

     if (arr[i]==0){
        count0++;
     }

     else if (arr[i]==1){
        count1++;
     }

     else{
        count2++;
     }
  }

  int index = 0;
  for(int i = 0; i < count0 ; i++){
     arr[index] = 0;
     index++;
  }

  for(int i = 0; i < count1 ; i++){
     arr[index] = 1;
     index++;
  }

  for(int i = 0; i < count2 ; i++){
     arr[index] = 2;
     index++;
  }
}


/* APPROACH 2:Can you think of a solution using swap and three-pointers?*/

#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   int low = 0;
   int mid = 0;
   int high = n-1;

   while (mid<=high){

      if(arr[mid]==0){
         swap(arr[low],arr[mid]);
         low++;
         mid++;
      }

      else if(arr[mid]==1){
         mid++;
      }

      else{
         swap(arr[high],arr[mid]);
         high--;
      }

   }
}
