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
    int n;

public:
    void run()
    {
        cin >> n;
        map<int, int> pos;
        vector<int> arr(n + 1, 0), ans(n + 1, 0);
        for (int i = 1; i <= n; i++)
            cin >> arr[i], pos[arr[i]] = i;

        for (int i = n; i >= 1; i--)
        {
            int f = pos[i] - 1, b = pos[i] + 1;
            while (f >= 1 && arr[f] < i)
                f--;
            while (b <= n && arr[b] < i)
                b++;
            if (f == 0 && b <= n)
                ans[i] = ans[arr[b]] + 1;

            else if (f > 0 && b > n)
                ans[i] = ans[arr[f]] + 1;

            else if (f > 0 && b <= n)
                ans[i] = max(ans[arr[f]], ans[arr[b]]) + 1;
            else
                ans[i] = 0;
        }
        for (int i = 1; i <= n; i++)
            cout << ans[arr[i]] << " ";
        cout << endl;
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