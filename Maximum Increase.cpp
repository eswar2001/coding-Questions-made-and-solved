#include<bits/stdc++.h>
using namespace std;
int main(){
 long long n,m=1;
 cin>>n;
 vector<long long>vec(n,0);
 vector<long long>inc(n,1);
 cin>>vec[0];
 for(int i=1;i<n;i++){
     cin>>vec[i];
     if(vec[i]>vec[i-1]){
         inc[i]+=inc[i-1];
         m=max(m,inc[i]);
     }
 }
 cout<<m;
    return 0;
}