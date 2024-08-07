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

void test() {
    ll n, m, k;
    cin >> n >> m >> k;
    ll ar1[n], ar2[m], ar3[m];
    for (ll i=0; i<n; i++) cin >> ar1[i];
    sort(ar1, ar1+n);
    for (ll i=0; i<m; i++) {cin >> ar2[i];}
    sort(ar2, ar2+m);
    for (ll i=0; i<m; i++) {
        if (i==0) ar3[i] = ar2[i];
        else ar3[i] = ar3[i-1] + ar2[i];
    }
    ll count = 0;
    for (ll i=0; i < n; i++) {
        for (ll j=m-1; j>=0; j--) {
            if (ar1[i] + ar3[j] <= k) {
                count += j+1;
                break;
            }
        }
    }
    cout << count << endl;
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
