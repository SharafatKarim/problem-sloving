#include <bits/stdc++.h>
using namespace std;

// Simple template by sharafat 
typedef long long ll;
typedef vector<ll> vl;

#define all(s) s.begin(), s.end()
#define rall(s) s.rbegin(), s.rend()
 
#define endl '\n'

void Test(ll t) {
    ll N;
    cin >> N;
    vl ar(N);
    map<ll, bool> exist;
    vl sum(N);
    sum[0] = 0

    ll sum = 0;
    for (ll i=0; i<N; i++) {
      cin >> ar[i]; 
      exist[ar[i]] = true;
    }

    for (ll i=0; i<N; i++) {
      for (ll i=0; i<N; i++) {

      }
    }
    cout << sum << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // Code starts here

    ll t = 1;
    // cin >> t;
    for (ll i=0; i<t; i++) Test(t); 

    // Code ends here
    return 0;
}
