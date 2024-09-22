int pivot(vector<int>& arr, int n){
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}
int binarysearch(vector<int>& arr,int s,int e,int key){
    int start=s,end=e;
     int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]<key)
        {
            start=mid+1;

        }
        else
        {
            end=mid-1;
        }
        mid=start+(end-start)/2;

    }
    return -1;
}

int search(vector<int>& arr, int n, int k)
{
    // Write your code here.
    // Return the position of K in ARR else return -1.
    int p=pivot(arr,n);
    if(k>=arr[p]&& k<=arr[n-1]){
        return binarysearch(arr, p, n-1, k);
    }
    else
    {
    return binarysearch(arr, 0,p, k);
    }
  
}