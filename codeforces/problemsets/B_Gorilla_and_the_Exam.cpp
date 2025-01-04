#include <bits/stdc++.h>
using namespace std;

// Simple template by sharafat 
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<string, string> pss;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vii;
typedef vector<ll> vl;
typedef vector<vl> vvl;

#define endl '\n'

void test() {
    ll n, k;
    cin >> n >> k;
    vl ar;
    set<ll> st;
    vector<pair<ll, ll>> vip;
    map<ll, ll> mp;

    for (ll i=0; i <n; i++) {
        ll temp;
        cin >> temp;
        mp[temp] += 1;
        st.insert(temp);
    }    
    // for (ll i=0; i <n; i++) {
        // vip.push_back(make_pair(mp[ar[i]], ar[i]));
    // }
    for (auto i: st) {
        ar.push_back(mp[i]);
    }
    sort(ar.begin(), ar.end());
    
    ll count = 0;
    for (auto i: ar) {
        if (i <= k) {
            k-= i;
            count++;
        } else {
            cout << (ar.size()-count) << endl;
            return;
        }
    }
    cout << 1 << endl;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // Code starts here

    ll t = 1;
    cin >> t;
    while(t--) test();

    // Code ends here
    return 0;
}