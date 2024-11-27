int FirstOcc(vector <int> &arr, int n, int k){

    int start = 0;
    int end = n-1;
    int mid = start + (end - start)/2;
    int ans = -1;

    while (start<=end){

        if( k == arr[mid]){
            ans = mid;
            end = mid-1;
        }

        else if(k < arr[mid]){
            end = mid-1;
        }

        else{
            start = mid+1;
        }

       mid = start + (end - start)/2;
        
    }

    return ans;
}

int LastOcc(vector <int> &arr, int n, int k){

    int start = 0;
    int end = n-1;
    int mid = start + (end - start)/2;
    int ans = -1;

    while (start<=end){

        if(k == arr[mid]){
            ans = mid;
            start = mid+1;
        }

        else if(k < arr[mid]){
            end = mid-1;
        }

        else{
            start = mid+1;
        }

       mid = start + (end - start)/2;
    }

    return ans;
}




pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k){

  pair <int,int> p;
  p.first = FirstOcc(arr,n,k);
  p.second = LastOcc(arr,n,k);

  return p;
  

}

