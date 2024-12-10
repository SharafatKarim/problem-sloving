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
    map<double, bool> exist;
    vl sum(N);

    for (ll i=0; i<N; i++) {
      cin >> ar[i]; 
      exist[ar[i]] = true;
      if (i==0) sum[0] = ar[i];
      else sum[i] = sum[i-1] + ar[i];
    }

    ll ans = 0;
    for (ll i=0; i<N; i++) {
      for (ll j=i; j<N; j++) {
        ll temp = 0;
        if (i == 0) temp = sum[j];
        else temp = sum[j]-sum[i-1];
        
        double cond = (double) temp / (j-i+1);
        // cout <<  " -> " << temp << " - " << cond  << " -> " << exist[cond] << endl;
        if (exist[cond]) {
          ans++;
        }
      }
    }

    cout << ans << endl;
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
