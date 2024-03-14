#include <bits/stdc++.h>
using namespace std;

// Simple template by sharafat
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<string, string> pss;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vii;
typedef vector<ll> vl;
typedef vector<vl> vvl;

#define endl '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // Code starts here

    ll n;
    cin >> n;
    vl ar(n);
    stack<ll> st, ans;

    for (ll i = 0; i < n; i++)
        cin >> ar[i];

    for (ll i = n - 1; i >= 0; i--)
    {
        if (st.empty())
        {
            ans.push(-1);
            st.push(ar[i]);
        }
        else
        {
            if (st.top() < ar[i])
            {
                ans.push(st.top());
                st.push(ar[i]);
            }
            else
            {
                while (!st.empty() && st.top() >= ar[i])
                {
                    st.pop();
                }
                if (st.empty())
                {
                    ans.push(-1);
                    st.push(ar[i]);
                }
                else
                {
                    ans.push(st.top());
                    st.push(ar[i]);
                }
            }
        }
    }

    while (!ans.empty())
    {
        cout << ans.top() << " ";
        ans.pop();
    }

    // Code ends here
    return 0;
}
