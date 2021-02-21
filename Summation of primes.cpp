#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool isPrime(ll n){
  if(n<2) return false;
    if(n<=3) return true;
    if(n%2==0) return false;
    if(n<9) return true; 
    if(n%3==0) return false;

    for(ll i=5; i<=sqrt(n); i+=2)
    {
        if(n%i==0)return false;
    }
    return true;
}
int main(){
  ll cnt=0;
for(ll i=2;i<2000000;i++){
 if(isPrime(i)){
   cout<<i<<"\n";
   cnt+=i;
 }
}
cout<<endl;
cout<<cnt;
}