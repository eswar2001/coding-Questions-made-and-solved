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
    Solution()
    {
    }
    void run()
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> v(n, 0);
        ll ans = -1;
        for (int i = 0; i < n; i++)
            cin >> v[i];
        map<ll, ll> mp;
        for (int i = 0; i < n; i++)
        {
            if (v[i] % k)
            {
                ans = max(ans, k - v[i] % k + k * mp[k - v[i] % k]++);
            }
        }
        cout << ++ans << endl;
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