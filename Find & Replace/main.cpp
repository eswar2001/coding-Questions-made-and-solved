#include <bits/stdc++.h>

using namespace std;

int main()
{
  freopen("in07.txt","r",stdin);
  freopen("out07.txt","w",stdout);
    int n;
    cin>>n;
    string mystr;
     regex regexp("portal");
     while(n--)
    {
    cin>>mystr;
    cout << regex_replace(mystr, regexp, "website")<<endl;
    }
}
