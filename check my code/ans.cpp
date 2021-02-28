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
        int n;
        cin >> n;
        string s;
        cin >> s;
        stack<char> st;
        // cout << s << endl;
        for (int i = 0; i < s.length(); i++)
        {
            if (st.empty())
            {
                st.push(s[i]);
            }
            else if (st.top() == '(' && s[i] == ')')
            {
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }
        }
        cout << st.size() / 2 << endl;
    }
};
int main()
{
    freopen("in00.txt","r",stdin);
    freopen("out00.txt","w",stdout);
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