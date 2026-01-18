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
    for (ll i=0; i< n; i++) {
        cin >> ar[i];
    }
    sort(ar.begin(), ar.end());
    ll conse=1, max_conse=1;
    for (ll i=1; i< n; i++) {
        // cout << ar[i-1] << ar[i] << (ar[i-1]+1 == ar[i]) << endl;
        if (ar[i-1] + 1 == ar[i]) {
            conse++;
        } else if (ar[i-1] == ar[i]) {
            continue;
        } else {
            max_conse = max(conse, max_conse);
            conse = 1;
        }
    }
    max_conse = max(conse, max_conse);
    cout << max_conse << endl;
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
