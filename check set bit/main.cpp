#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("in01.txt","r",stdin);
    freopen("ot01.txt","w",stdout);
    int n;
    cin>>n;
    while(n--){
    string a;
    cin>>a;
    regex b("(.*)(1)(.*)");
    if ( regex_match(a, b) )
       cout <<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    }
}
