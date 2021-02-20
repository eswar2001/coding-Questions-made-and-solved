#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll sum =0;
        for(int i=1;i<=n;i++){
            if(i<n/2 || i==n)
            sum+=pow(2,i);
            else
            sum-=pow(2,i);
        }
       cout<<sum<<"\n";
    }
}
