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
        ll n;
        cin >> n;
        // cout << n << endl;
        if (n == 1)
        {
            cout << 0 << endl;
            return;
        }
        else if (n % 3 != 0)
        {
            cout << -1 << endl;
            return;
        }
        ll cnt = 0;
        while (n != 1)
        {
            if (n % 3 != 0)
            {
                cout << -1 << endl;
                return;
            }
            if (n % 6 == 0)
            {
                n /= 6;
            }
            else
                n *= 2;
            cnt++;
        }
        cout << cnt << endl;
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