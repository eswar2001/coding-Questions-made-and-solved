//https://codeforces.com/contest/1426/problem/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long x,n;
        cin>>n>>x;
        if(n>2){
            n-=2;
            long long m=(n%x==0)?n/x:n/x+1;
            m++;
            cout<<m<<"\n";
        }else{
            cout<<1<<"\n";
        }
        
    }
    return 0;
}