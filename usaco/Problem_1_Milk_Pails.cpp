#include <bits/stdc++.h>
using namespace std;

// Simple template by sharafat 
typedef long long ll;
typedef vector<ll> vl;

#define all(s) s.begin(), s.end()
#define rall(s) s.rbegin(), s.rend()
 
#define endl '\n'

void Test(ll t) {
    ll X, Y, M;
    cin >> X >> Y >> M; // aX + bY <= M
    vl ans(3, 0);

    ll i=0, j=0;
    for (i=0;i*X+j*Y <= M;i++) {
      for (j=0;i*X+j*Y <= M;j++) {
        // cout << i << " " << j << endl;
        if (i*X + j*Y > ans[2]) {
          ans[0] = i;
          ans[1] = j;
          ans[2] = i*X + j*Y;
        }
      }
      j = 0;
    }

    // cout << ans[0] << " * " << ans[1] << " = " << ans[2] << endl;
    cout << ans[2] << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("pails.in", "r", stdin);
	  freopen("pails.out", "w", stdout);

    // Code starts here

    ll t = 1;
    // cin >> t;
    for (ll i=0; i<t; i++) Test(t); 

    // Code ends here
    return 0;
}
