#include<iostream>
using namespace std;
int binarysearch(int a[],int size,int key){
    int start=0,end=size-1;
     int mid=start+(end-start)/2;
    while(start<=end){
        if(a[mid]==key)
        {
            return mid;
        }
        else if(a[mid]<key)
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
int main(){
    int even[6]={2,3,4,5,6,7};
    int odd[5]={8,9,10,11,45};
    // int index= binarysearch(even,6,6);
    int index= binarysearch(odd,5,45);

    cout<<"Index of 45 is : "<< index << endl;

    return 0;
}