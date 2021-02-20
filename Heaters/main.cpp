#pragma GCC optimize("O1")
#pragma GCC optimize("O2")
#pragma GCC optimize("O3")
#pragma GCC optimize("Og")
#pragma GCC optimize("Ofast")
#pragma comment(linker, "/STACK:16777216")
#include<bits/stdc++.h>
using namespace std;
#define ENDL "\n"
#define ENDS "\t"
typedef int ll;
typedef vector < int > vi;
typedef pair < int, int > ii;
typedef vector < ii > vii;
typedef set < int > si;
typedef map < string, int > msi;
// To simplify repetitions/loops, Note: define your
// loop style and stick with it!
#define REP(i, a, b) for (int i = int(a); i <= int(b); i++) // a to b, and variable i is local!
#define TRvi(c, it) for (vi::iterator it = (c).begin(); it != (c).end(); it++)
#define TRvii(c, it) for (vii::iterator it = (c).begin(); it != (c).end(); it++)
#define TRmsi(c, it) for (msi::iterator it = (c).begin(); it != (c).end(); it++)
#define INF 2000000000 // 2 billion
// If you need to recall how to use memset:
#define MEMSET_INF 127 // about 2B
#define MEMSET_HALF_INF 63 // about 1B
// memset(dist, MEMSET_INF, sizeof dist); // useful to initialize shortest path distances
// memset(dp_memo, -1, sizeof dp_memo); // useful to initialize DP memoization table
// memset(arr, 0, sizeof arr); // useful to clear array of integers
#define fast ios_base::sync_with_stdio(false);\
cin.tie(NULL);\
cout.tie(NULL);
#define test ll t;\
cin>>t;\
while (t--)
#define N 1e9
void fastscan(ll & number) {
  bool negative = false;
  register int c;

  number = 0;
  c = getchar();
  if (c == '-') {
    negative = true;
    c = getchar();
  }
  for (;
    (c > 47 && c < 58); c = getchar())
    number = number * 10 + c - 48;
  if (negative)
    number *= -1;
}
int main() {
  fast
  ll n,r;
  cin>>n>>r;
 /* vector<ll>v;
  bool arr[n]={0};
  for(int i=1;i<=n;i++){
    ll t;
    cin>>t;
    if(t)
    v.push_back(i);
  }
  pair<ll,ll>range;
    for(auto x:v){
            make_pair(x-r+1,x+r-1);
        for(ll i=x-r+1;i<=x+r-1;i++)
            arr[i]=true;
    }
    for(auto x:arr){
        if(!x){
            cout<<"-1"<<ENDL;
            break;
        }
    }*/
	vector<ll> a(n);
	for (ll i = 0; i < n; ++i) {
		cin >> a[i];
	}
	ll ans = 0;
	ll last = -1;
	while (last < n - 1) {
		ll position = -1;
		for (ll i = n - 1; i > max(-1, last - r + 1); --i) {
			if (a[i] == 1 && i - r <= last) {
				position = i;break;
			}
		}
		if (position == -1) {
			cout << -1 <<ENDL;
			return 0;
		}
		++ans;
		last = position + r - 1;
	}

	cout << ans <<ENDL;

  return 0;
}
