#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct node{
  vector<ll>child;
};
int main(){
ll vertices,edges;
cin>>vertices>>edges;
struct node parent[vertices];
bool arr[vertices][vertices];
for(ll i=0;i<edges;i++){
  ll u,v;
  cin>>u>>v;
  arr[u-1][v-1]=true;
  if(arr[u-1][v-1])
   parent[u-1].child.push_back(v-1);
}
for(ll i=0;i<vertices;i++){
for(ll j=0;j<vertices;j++){
cout<<arr[i][j]<<" ";
}
cout<<"\n";
}
for(int i=0;i<vertices;i++){
   cout<<"vertex "<<i+1;
  for(auto x:parent[i].child){
    cout<<"-->"<<x+1;
  }
  cout<<endl;
}
return 0;
}
