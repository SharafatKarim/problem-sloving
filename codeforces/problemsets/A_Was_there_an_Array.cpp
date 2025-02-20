#include <bits/stdc++.h>
using namespace std;

// Simple template by sharafat 
typedef long long ll;
typedef vector<ll> vl;

#define all(s) s.begin(), s.end()
#define rall(s) s.rbegin(), s.rend()
 
#define endl '\n'

void Test(ll t) {
  ll n;  
  cin >> n;
  n = n - 2;

  vl ar(n+2), temp(n+2, 0);
  for (ll i=0; i <n; i++) {
    cin >> ar[i+1];
    if (ar[i+1] == 1) {
      temp[i] = 1;
      temp[i+1] = 1;
      temp[i+2] = 1;
    }
  }
  
  // for (ll i=0; i <n; i++) {
  //   cout << temp[i];
  // }
  // cout << endl;

  bool possible = true;
  for (ll i=0; i <n; i++) {
    if (ar[i+1] == 0 && temp[i+1] == 1 && temp[i] == 1 && temp[i+2] == 1) {
      possible = false;
      break;
    }
  }

  if (possible) cout << "YES" << endl;
  else cout << "NO" << endl;
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
