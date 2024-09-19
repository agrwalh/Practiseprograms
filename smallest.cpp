// #include<iostream>
// using namespace std;

// int main(){
//     int nums[]={5,15,20,25,-15};
//     int size=5;
//     int smallest=INT_MAX;
//     int largest=INT_MIN;
//     int smallestin=-1;
//     int larin=-1;

//     for(int i=0;i<size;i++){
//         smallest=min(nums[i],smallest);
//         smallestin=i;
//         largest=max(nums[i],largest);
//         larin=i;
//     }
//     cout <<"Smallest= " << smallest<< " at Index " <<smallestin<<endl;
//     cout <<"Largest=" << largest <<" at Index "<<larin<< endl;
//     return 0;
// }

#include<iostream>
using namespace std;

int main(){
    int a[]={4,2,7,8,1,2,5};
    int size=7;
    int start=0;
    int end=size-1;

    while(start<end){
        swap(a[start],a[end]);
        start++;
        end--;
    }
    cout<<"Reversed arrray: ";
    for(int i=0;i<size;i++){
        cout<< a[i]<<" ";
    }
    cout<< endl;
    return 0;
}