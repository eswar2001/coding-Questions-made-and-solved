#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{   ll m=INT_MIN;
	ll n = 600851475143;
	while (n%2 == 0)
	{
	    m=m>2?m:2;

		n = n/2;
	}
	for (ll i = 3; i <= sqrt(n); i = i+2)
	{
		while (n%i == 0)
		{
		    m=m>i?m:i;

			n = n/i;
		}
	}
	if (n > 2)
        m=m>n?m:n;
    cout<<m;
	return 0;
}
