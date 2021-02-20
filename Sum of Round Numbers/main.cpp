#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){

    ll t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s.length()==1)
          cout<<1<<"\n"<<s<<"\n";
        else
          {  ll non_zero=0;
              for(auto x:s){
              if(x!='0')
                 non_zero++;
          }
         cout<<non_zero<<"\n";
         ll p=1;
         vector<int>digits;
         for(ll i=s.length()-1;i>=0;i--){
            if(s[i]!='0')
             digits.push_back(int(s[i]-'0')*p);
             p*=10;
         }
         for(auto x:digits)
             cout<<x<<" ";
        cout<<"\n";
          }
    }
}


