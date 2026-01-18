#include <bits/stdc++.h>
using namespace std;

// Simple template by sharafat 
typedef long long ll;
typedef vector<ll> vl;

#define all(s) s.begin(), s.end()
#define rall(s) s.rbegin(), s.rend()
 
#define endl '\n'

void Test(ll t) {
    ll n, m, k;
    cin >> n >> m >> k;
    vl robo(n);
    map<ll, bool> spike, dead;
    for (ll i=0; i<n; i++) {
        cin >> robo[i];
    }
    for (ll i=0; i<m; i++) {
        ll temp;
        cin >> temp;
        spike[temp] = true;
    }
    string instruct;
    cin >> instruct;

    ll cnt = n;
    for (auto s: instruct) {
        ll incre;
        if (s == 'L') {
            incre = -1;
        } else {
            incre = 1;
        }

        for (ll i=0; i <n; i++) {
            if (dead[i]) continue;
            robo[i] += incre;

            if (spike[robo[i]]) {
                dead[i] = true;
                cnt--;
            }
        }
        
        cout << cnt << " ";
    }

    cout << endl;

    // ll pass = 0;
    // for (ll i=0; i<n; i++) {
    //     ll cur = robo[i];
    //     bool failed = false;
    //     for (auto s: instruct) {
    //         if (s == 'L') cur--;
    //         else cur++;

    //         if (spike[cur]) {
    //             failed = true;
    //             break;
    //         }
    //     }
    //     if (!failed) pass++;
    // }
    // cout << pass << endl;
    
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
