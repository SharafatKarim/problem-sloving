#include <bits/stdc++.h>
using namespace std;

// Simple template by sharafat 
typedef long long ll;
typedef vector<ll> vl;

#define all(s) s.begin(), s.end()
#define rall(s) s.rbegin(), s.rend()
 
#define endl '\n'

void Test(ll t) {
    ll n, m, h;
    cin >> n >> m >> h;
    vl ar(n), temp(n);

    for (ll i=0; i< n; i++) {
        cin >> ar[i];
    }
    
    temp.assign(ar.begin(), ar.end());
    while (m--) {
        ll b, c;
        cin >> b >> c;
        temp[b-1] += c;
        
        if (temp[b-1] > h) {
            temp.assign(ar.begin(), ar.end());
        }
    }
    
    for (ll i=0; i< n; i++) {
        cout << temp[i] << " ";
    }
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
