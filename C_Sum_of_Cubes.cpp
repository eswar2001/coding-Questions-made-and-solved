#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> p64;
typedef pair<int, int> p32;
typedef pair<double, double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<ll>> vv64;
typedef vector<vector<int>> vv32;
class Solution
{
public:
    void run()
    {
        ll n;
        cin >> n;
        bool flag = false;
        map<ll, ll> mp;

        for (ll i = 1; i * i * i <= n; i++)
        {
            mp[i * i * i] = 1;

            if (mp.find(n - (i * i * i)) != mp.end())
            {
                flag = true;
                break;
            }
        }
        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        Solution test_case = Solution();
        test_case.run();
    }
    return 0;
}