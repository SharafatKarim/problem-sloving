#include <bits/stdc++.h>
using namespace std;

// Simple template by sharafat 
typedef long long ll;
typedef vector<ll> vl;

#define all(s) s.begin(), s.end()
#define rall(s) s.rbegin(), s.rend()
 
#define endl '\n'

void Test(ll t) {
    string s;
    deque<char> q;
    cin >> s;
    ll len = s.length();
    for (ll i=0; i<len; i++) {
        if (!q.empty() && s[i] == q.back()) {
            q.pop_back();
        } else {
            q.push_back(s[i]);
        }
    }
    if (q.empty())
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // Code starts here

    ll t = 1;
    cin >> t;
    for (ll i=0; i<t; i++) Test(t); 

    // Code ends here
    return 0;
}
