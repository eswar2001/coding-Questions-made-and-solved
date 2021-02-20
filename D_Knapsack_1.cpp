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
    ll n, maxwt;
    vector<pair<ll, ll>> item;
    vector<vector<ll>> dp;

public:
    Solution()
    {
        vector<ll> v(100001, -1);
        for (ll i = 0; i < 1e2 + 5; i++)
        {
            dp.push_back(v);
        }
    }
    void run()
    {
        cin >> n >> maxwt;
        for (ll i = 0; i < n; i++)
        {
            ll a, b;
            cin >> a >> b;
            item.push_back({a, b});
        }
        cout << calc(0, maxwt);
    }
    ll calc(ll i, ll w)
    {
        if (w <= 0)
        {
            return 0;
        }
        if (i == n)
        {
            return 0;
        }
        if (dp[i][w] != -1)
        {
            return dp[i][w];
        }
        ll profit = 0;
        if (w - item[i].first > -1)
        {
            profit = max(calc(i + 1, w - item[i].first) + item[i].second, calc(i + 1, w));
        }
        else
        {
            profit = calc(i + 1, w);
        }
        return dp[i][w] = profit;
    }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        Solution test_case = Solution();
        test_case.run();
    }
    return 0;
}