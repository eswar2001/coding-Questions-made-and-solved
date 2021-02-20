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
    vector<int> v;

public:
    void run()
    {
        cin >> n;

        int cnt = 0, c0 = 0, c1 = 0, c3 = 0;
        int k = n / 3;
        for (int i = 0; i < n; i++)
        {
            int tmp;
            cin >> tmp;
            v.push_back(tmp);
            if (v[i] % 3 == 0)
            {
                c0++;
            }
            else if (v[i] % 3 == 1)
            {
                c1++;
            }
            else
            {
                c3++;
            }
        }
        if (c0 == k && c1 == k && c3 == k)
        {
            cout << "0\n";
            return;
        }
        while (c0 != k || c1 != k || c3 != k)
        {
            if (c0 > k)
            {
                while (c0 > k)
                {
                    cnt++;
                    c0--;
                    c1++;
                }
            }
            if (c1 > k)
            {
                while (c1 > k)
                {
                    cnt++;
                    c1--;
                    c3++;
                }
            }
            if (c3 > k)
            {
                while (c3 > k)
                {
                    cnt++;
                    c3--;
                    c0++;
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