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

    if (N == 1) {
      cout << 1 << endl;
      return;
    }

    sort(all(A));

    ll sum = 0;
    ll j = 1;
    for (ll i=0; i< N-1; i++) {
      while (j < N && A[j] - A[i] <= K) j++;
      sum = max(sum, j-i);
    }

    cout << sum << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("diamond.in", "r", stdin);
	  freopen("diamond.out", "w", stdout);

    // Code starts here

    ll t = 1;
    // cin >> t;
    for (ll i=0; i<t; i++) Test(t); 

    // Code ends here
    return 0;
}
