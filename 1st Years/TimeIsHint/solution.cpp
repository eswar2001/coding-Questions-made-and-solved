//solution:-
#include<bits/stdc++.h>
using namespace std;
int main(){
  /*
  » Minute angle (from 12 o’clock): 360 * minutes / 60 
  » Hour angle (from 12 o’clock): 360 * (hour % 12) / 12 + 360 * (minutes / 60) * (1 / 12) 
  » Angle between hour and minute: (hour angle - minute angle) % 360 
   here the a and b are hands in a clock
  a is hours hand and b is minutes hand
  the required output is angle between them*/
  float a,b;
  while(cin>>a>>b)//while(scanf("%d%d",&a,&b) != EOF)
  {
    cout<<int(abs(a*30-5.5*b))<<"\n";
  }
  return 0;
}
//refernce link https://eswar2001.github.io/template-for-coding-solutions-display/