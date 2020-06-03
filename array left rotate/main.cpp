#include<bits/stdc++.h>
using namespace std;
template<typename D>
vector<D> left_rotate(vector<D>arr){
    D first=arr[0];
    for(unsigned int i=1;i<=arr.size()-1;i++)
    {
       arr[i-1]=arr[i];
    }
    arr[arr.size()-1]=first;
    for(auto x:arr)
        cout<<x<<" ";
    cout<<"\n";
    return arr;
}
int main(){
    vector<char>v;
    for(unsigned int i=0;i<10;i++)
        v.push_back(rand());
    for(auto x:v)
        cout<<x<<" ";
    cout<<"\n";
    v=left_rotate(v);
}
