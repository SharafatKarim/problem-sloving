#include <bits/stdc++.h>
using namespace std;

// Simple template by sharafat 
typedef long long ll;
typedef vector<ll> vl;

#define all(s) s.begin(), s.end()
#define rall(s) s.rbegin(), s.rend()
 
#define endl '\n'

void Test(ll t) {
    ll n, cnt=0; 
    cin >> n;
    while (n--) {
        string temp;
        cin >> temp;
        if (temp == "ADD") {
            cnt++;
        } else if (temp == "PUSH") {
            cnt++;
        } else {
            continue;
        }
    }
    cout << "***" << endl;
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
