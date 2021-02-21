#include<bits/stdc++.h>
using namespace std;
int main(){
    //1,5,10,20,100
  long long a;
  cin>>a;
  long long cnt=0,rem=0;
  if(a>=100){
      cnt= a/100;
      rem= a%100;
  }else{
      rem=a;
  }
  if(rem>=20){
      cnt+=rem/20;
      rem=rem%20;
  }
  if(rem>=10){
      cnt+=rem/10;
      rem=rem%10;
  }
  if(rem>=5){
      cnt+=rem/5;
      rem=rem%5;
  }if(rem>=1){
      cnt+=rem;
  }cout<<cnt<<"\n";
  
    return 0;
}