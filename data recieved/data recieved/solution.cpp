//https://repl.it/@eswarabisheak/QwertytoDevrak
#include <bits/stdc++.h> 

using namespace std;

int main()
{
   
  freopen("input.txt","r",stdin);
   
    freopen("output.txt","w",stdout);
    map<string,int> mymap;
    string cur;
    while(getline(cin,cur)){
        if(mymap[cur]==NULL){
            mymap[cur]=1;
          cout<<cur;
           cout<<'\n';
        }
        else
            mymap[cur]++;
    }
  
}