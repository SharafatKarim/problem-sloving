#include <bits/stdc++.h>
using namespace std;

// Simple template by sharafat 
typedef long long ll;
typedef vector<ll> vl;

#define all(s) s.begin(), s.end()
#define rall(s) s.rbegin(), s.rend()
 
#define endl '\n'

bool trick(ll a, ll b, ll c) {
    if (( a < b && b < c ) || (a > b && b > c )) return true;
    return false;
}

void Test(ll t) {
    ll n;
    cin >> n;
    vl ar;
    for (ll i=0; i<n; i++) {
        ll temp;
        cin >> temp;
        ar.push_back(temp);
    }
    ll st=0, en=2, cnt=0;
    while (en != n) {
        if (trick(ar[st], ar[st+1], ar[en])) cnt++;
        st++; en++;
    } 
    cout << cnt << endl;
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
