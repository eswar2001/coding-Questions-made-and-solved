#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void abc();
template<typename D>
vector<D> rotate_right(vector<D>arr,ll n)
{
    D last=arr[arr.size()-1];
    for(int i=arr.size()-2; i>=0; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[0]=last;
    for(auto x:arr)
        cout<<x<<" ";

    return arr;
}
int main()
{
    vector<int>v;
    for(int i=0; i<5; i++)
        v.push_back(rand());
    for(auto x:v)
    {
        cout<<x<<" ";
    }
    cout<<"\n";
    v=rotate_right(v,5);
   cout<<"\t size: "<<v.size()<<"\n";
   abc();
}
void abc(){
 vector<char>v;
    for(int i=0; i<5; i++)
        v.push_back(rand());
    for(auto x:v)
    {
        cout<<x<<" ";
    }
    cout<<"\n";
    v=rotate_right(v,5);
    cout<<"\t size: "<<v.size()<<"\n";
    }
