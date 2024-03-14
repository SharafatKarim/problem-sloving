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

void test()
{
    ll n;
    string s;
    cin >> n >> s;
    stack<ll> st;

    for (auto i: s) {
        if ('0' <= i && i <= '9') {
            st.push(i-'0');
        } else {
            ll a, b;
            a = st.top();
            st.pop();
            b = st.top();
            st.pop();

            if (i == '+') {
                st.push(a+b);
            } else if (i == '-') {
                st.push(b-a);
            } else if (i == '*') {
                st.push(a*b);
            } 
        }
    }

    cout << st.top() << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // Code starts here

    ll t;
    cin >> t;
    while (t--) test();

    // Code ends here
    return 0;
}
