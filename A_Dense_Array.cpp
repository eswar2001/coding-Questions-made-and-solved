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

    int cnt, n;
    vector<int> v;

public:
    Solution()
    {
        cnt = 0;
    }
    void run()
    {

        cin >> n;
        int mi = 0, ma = 0;
        for (int i = 0; i < n; i++)
        {
            int tmp;
            cin >> tmp;
            v.push_back(tmp);
        }
        for (int i = 0; i < n - 1; i++)
        {
            bool flag = v[i] * 2 < v[i + 1] || v[i + 1] * 2 < v[i];
            if (flag)
            {
                mi = min(v[i], v[i + 1]);
                ma = max(v[i], v[i + 1]);
                while (mi * 2 < ma)
                {
                    mi = mi * 2;
                    cnt++;
                }
            }
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