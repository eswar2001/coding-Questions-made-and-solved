#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
void addEdge(vector<ll> adj[], ll u, ll v) 
{ 
	adj[u].push_back(v); 
	adj[v].push_back(u); 
} 
void printGraph(vector<ll> adj[], ll V) 
{ 
	for (ll v = 0; v < V; ++v) 
	{ 
		cout << "\n Adjacency list of vertex "
			<< v << "\n head "; 
		for (auto x : adj[v]) 
		cout << "-> " << x; 
		printf("\n"); 
	} 
} 
int main() 
{ 
	 ll vertices,edges;
   cin>>vertices>>edges;
	vector<ll> adj[vertices]; 
	for(ll i=0;i<edges;i++){
    ll u,v; cin>>u>>v;
    addEdge(adj,u,v);}
	printGraph(adj, vertices); 
	return 0; 
} 
