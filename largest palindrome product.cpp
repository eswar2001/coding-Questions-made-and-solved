/*A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.*/
#include<bits/stdc++.h>
using namespace std;
bool palin(int i){
  int n=i,num=i,digit=0,rev=0;
     do
     {
         digit = num % 10;
         rev = (rev * 10) + digit;
         num = num / 10;
     } while (num != 0);

     if (n != rev)
     return false;

  return true;
}
int main(){
  int ma=INT_MIN;
  for(int i=100;i<=999;i++){
    for(int j=i;j<=999;j++){
      if(palin(i*j)){
        ma=max(i*j,ma);
      }
    }
  }
  cout<<ma;
}