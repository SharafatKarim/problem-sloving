#include <bits/stdc++.h>
using namespace std;

// Simple template by sharafat 
typedef long long ll;
typedef vector<ll> vl;

#define all(s) s.begin(), s.end()
#define rall(s) s.rbegin(), s.rend()
 
#define endl '\n'

void Test(ll t) {
    ll n, m;
    cin >> n >> m;
    vl x(n), y(n);
    for (ll i=0; i<n; i++) {
      ll a, b;
      cin >> a >> b;
      if (i == 0) {
        x[i] = a;
        y[i] = b;
      } else {
        x[i] = a + x[i-1];
        y[i] = b + y[i-1];
      }
      // cin >> x[i] >> y[i];
    }

    sort(all(x));
    sort(all(y));

    cout << (2 * ( x[n-1] + m - x[0] + y[n-1] + m - y[0] )) << endl;
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
