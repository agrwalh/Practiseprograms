#include<iostream>
using namespace std;
int main(){
    int num=5;
    int *p=&num;
    cout<<"before-"<<num<<endl;
    (*p)++;
    cout<<"after-"<<num<<endl;

    int *q=p;
    cout<<p<<"-"<<q<<endl;
    cout<<p<<"-"<<q<<endl;

    return 0;


}