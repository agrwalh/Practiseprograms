#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(2);
    v.push_back(1);
    v.push_back(12);
    v.push_back(90);
    cout<<"finding 12 "<<binary_search(v.begin(),v.end(),14)<<endl;


}