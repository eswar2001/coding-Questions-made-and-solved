/*
A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a2 + b2 = c2
For example, 32 + 42 = 9 + 16 = 25 = 52.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
  for(long long i=2;i<999;i++){
    for(long long j=i+1;j<999;j++){
      for(long long k=j+1;k<999;k++){
        // cout<<i<<" "<<j<<" "<<k<<endl;
        if(i*i+j*j==k*k && i+j+k==1000){
             cout<<i*j*k;
             break;
        }
      }
    }
  }
}
