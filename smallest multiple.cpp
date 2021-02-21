/*
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
 long long n=1000000007;
 for(int j=1;j<=n;j++){ 
   bool flag=true;
   for(int i=1;i<=20;i++){
   if(j%i!=0){
     flag=false;
       break;
   }
 }
 if(flag){
   cout<<j;
 break;
 }
 }
}