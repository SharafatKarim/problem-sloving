#include <bits/stdc++.h>
using namespace std;

// Simple template by sharafat 
typedef long long ll;
typedef vector<ll> vl;

#define all(s) s.begin(), s.end()
#define rall(s) s.rbegin(), s.rend()
 
#define endl '\n'

void Test(ll t) {
    ll N, K;
    cin >> N >> K;
    vl A(N);
    for (ll i=0; i<N; i++) cin >> A[i];

    ll sum = 0;
    for (ll i=0; i<N; i++) {
      for (ll j=i+1; j<N; j++) {
        cout << A[i] << " " << A[j] << " diff " << abs(A[i]-A[j]) << endl;
        if (abs(A[i] - A[j]) == K) {
          sum++;
        }
      }
    }

    cout << sum << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("pails.in", "r", stdin);
	  // freopen("pails.out", "w", stdout);

    // Code starts here

    ll t = 1;
    // cin >> t;
    for (ll i=0; i<t; i++) Test(t); 

    // Code ends here
    return 0;
}
