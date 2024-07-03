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

ll mini(ll a, ll b, ll c) {
    return min(a, min(b, c));
}

void test() {
    ll n;
    cin >> n;
    vl ar(n);
    for (auto &i: ar) cin >> i;
    for (ll i=1; i<n-1; i++) {
        ll min = mini(ar[i-1], ar[i], ar[i+1]);
        if (min == 0) continue;
        ar[i-1] -= min;
        ar[i] -= min*2;
        ar[i+1] -= min;
        // if (i > 1 && ar[i-2] > 0) break;
    }
    ll count = 0;
    for (auto i: ar) {
        if (i != 0) {cout << "NO" << endl; return;}
    }
    cout << "YES" << endl;
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
