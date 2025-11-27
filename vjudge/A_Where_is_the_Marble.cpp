#include <bits/stdc++.h>
using namespace std;

// Simple template by sharafat 
typedef long long ll;
typedef vector<ll> vl;

#define all(s) s.begin(), s.end()
#define rall(s) s.rbegin(), s.rend()
 
#define endl '\n'

void Solve(ll n, ll q) {
    ll temp;
    vl ar, query;
    for (ll i=0; i <n; i++) {
        cin >> temp;
        ar.push_back(temp); 
    }
    for (ll i=0; i <q; i++) {
        cin >> temp;
        query.push_back(temp);
    }
    sort(ar.begin(), ar.end());
    
    for (ll i=0; i <q; i++) {
        ll to_find = query[i];
        bool is_found = false;
        
        for (ll j=0; j <n; j++) {
            if (ar[j] == to_find) {
                is_found = true;
                cout << to_find << " found at " << (j+1) << endl;
                break;
            }
        }
        
        if (!is_found) {
            cout << to_find << " not found" << endl;
        }
    }
}

void Test(ll t) {
    ll n, q, cc = 1;
    while (true) {
        cin >> n >> q;
        if (n==0 && q==0) {
            break;
        }
        cout << "CASE# " << cc++ << ":" << endl;
        Solve(n, q);
    }
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
