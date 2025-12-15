#include <bits/stdc++.h>
using namespace std;

// Simple template by sharafat 
typedef long long ll;
typedef vector<ll> vl;

#define all(s) s.begin(), s.end()
#define rall(s) s.rbegin(), s.rend()
 
#define endl '\n'

void solve(ll n) {
    ll count = 0;
    while (n--) {
        string s;
        cin >> s;

        vector<string> arr;
        
        string temp = "";
        for (auto i: s) {
            if (i == ':') {
                arr.push_back(temp);
                temp = "";
                continue;
            }
            temp += i;
        }
        arr.push_back(temp);
        
        char d = s[0];
        ll h1 = stoi(arr[1]);
        ll m1 = stoi(arr[2]);
        ll s1 = stoi(arr[3]);
        ll h2 = stoi(arr[4]);
        ll m2 = stoi(arr[5]);
        ll s2 = stoi(arr[6]);

        if (h1 < 8 || (h1 == 8 && m1 < 30)) {
            h1 = 8;
            m1 = 30;
        }

        bool isLate = false;
        bool notEnough = false;
        ll timeInSec = 0;

        ll diff = (h2 * 3600 + m2 * 60 + s2) - (h1 * 3600 + m1 * 60 + s1);

        if (d == 'D') {
            if (h1 < 9 || (h1 == 9 && m1 < 30)) isLate = true;
            if (diff < 28800) notEnough = true;
        } else {
            if (h1 < 12 || (h1 == 12 && m1 < 30)) isLate = true;
            if (diff < 32400) notEnough = true;
        }

        if (isLate || notEnough) count++;
        cout << d << isLate << notEnough << endl;
    }
    cout << count << endl;
}

void Test(ll t) {
    while (true) {
        ll n;
        cin >> n;
        solve(n);
        if (n == 0) {
            break;
        }
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
