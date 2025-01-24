#include <bits/stdc++.h>
using namespace std;

// copyright MH Nazmul
typedef long long ll;
typedef vector<ll> vl;

#define all(s) s.begin(), s.end()
#define rall(s) s.rbegin(), s.rend()
 
#define endl '\n'

void Test(ll t) {
    ll n, count = 0;
    cin >> n;

    vl bin;
    vl ans;

    for (ll i=0; i<60; i++) {
      if ((n & (1ll << i)) > 0) {
        ans.push_back(n- (1ll << i));
        bin.push_back(1);
        count++;
      } else {
        bin.push_back(0);
      }
    }
      
    // for (ll i = bin.size() -1; i >= 0; i--) {
    //   cout << bin[i];
    // } cout << endl;

    if (count > 1 ) {
      count++;
    }

    cout << count << "\n" ;
    sort(all(ans));

    if (count > 1) {
      for (ll i=0; i<ans.size(); i++) {
        cout << ans[i] << " ";
      }
    }
    cout << n;
    cout << endl;
    
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
