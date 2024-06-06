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
    vl a(n);
    for(auto &i: a) cin >> i;
    sort(a.begin(), a.end());
    cout << a[n-1] - 1 << endl;
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
