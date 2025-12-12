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
    vl ar(n);
    // set<ll> st;

    ll cnt_zero = 0, cnt_nonzero = 0, cnt_one = 0;
    for (ll i=0; i<n; i++) {
        cin >> ar[i];
        // st.insert(ar[i]);
        if (ar[i] == 0) cnt_zero++;
        else cnt_nonzero++;
        if (ar[i] == 1) cnt_one++;
    }
    if (cnt_zero <= cnt_nonzero + 1) cout << 0 << endl;
    else {
        if (cnt_nonzero == cnt_one && cnt_nonzero != 0) 
            cout << 2 << endl;
        else
            cout << 1 << endl;
    }
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
