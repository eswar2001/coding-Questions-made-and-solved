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
        ll x, y, n;
        cin >> x >> y >> n;
        if (y == 0)
        {
            if (n < x)
                cout << 0 << endl;
            else
                cout << n - (n % x - y) << endl;
        }
        else if (n % x < y)
        {
            cout << (n - x + y - (n % x)) << endl;
        }
        else if (n % x > y)
        {
            cout << n - (n % x - y) << endl;
        }
        else if (n % x == y)
        {
            cout << n << endl;
        }
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