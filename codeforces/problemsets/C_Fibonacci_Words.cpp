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

bool compare(char a, char b, char c) {
    ll fi = a - 'A';
    ll la = b - 'A';
    if (((fi + la) % 26) == (c - 'A')) return true; 
    return false;
}

void test() {
    string s;
    cin >> s;
    if (s.length()<=2) {
        cout << "YES" << endl;
        return;
    }
    for (ll i=2; i < s.length(); i++) {
        if (!compare(s[i-2], s[i-1], s[i])) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // Code starts here

    ll t = 1;
    // cin >> t;
    while(t--) test();

    // Code ends here
    return 0;
}