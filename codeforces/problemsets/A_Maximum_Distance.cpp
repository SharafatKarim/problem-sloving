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
    ll n;
    cin >> n;
    vl arx(n);
    vl ary(n);

    for (ll i=0; i < n; i++) {
        cin >> arx[i];
    }
    for (ll i=0; i < n; i++) {
        cin >> ary[i];
    }

    ll max_v = 0;
    for (ll i=0; i < n; i++) {
        for (ll j=i+1; j < n; j++) {
            max_v = max(max_v, ((arx[i]-arx[j])*(arx[i]-arx[j])) + ((ary[i]-ary[j])*(ary[i]-ary[j])) );
        }
    }

    cout << max_v << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // Code starts here

    ll t = 1;
    // cin >> t;
    while(t--) test();

    // Code ends here
    return 0;
}