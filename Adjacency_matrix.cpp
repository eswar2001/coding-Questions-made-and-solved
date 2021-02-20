#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
  ll vertices, edges;
  cin >> vertices >> edges;
  bool arr[vertices][vertices];
  for (ll i = 0; i < edges; i++)
  {
    ll u, v;
    cin >> u >> v;
    arr[u][v] = true;
  }
  for (ll i = 0; i < vertices; i++)
  {
    for (ll j = 0; j < vertices; j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << "\n";
  }
  return 0;
}