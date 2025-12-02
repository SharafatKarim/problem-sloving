#include <bits/stdc++.h>
using namespace std;

// Simple template by sharafat 
typedef long long ll;
typedef vector<ll> vl;

#define all(s) s.begin(), s.end()
#define rall(s) s.rbegin(), s.rend()
 
#define endl '\n'

void Test(ll t) {
    // input
    set<string> st;
    map<string, string> stos;
    map<string, int> freq;

    while (true) {
        string s;
        cin >> s;
        if (s == "#")
            break;
        
        string raw_s = s;
        for (char &c: s) {
            if ('A' <= c && c <= 'Z')
                c += 32;
        }
        sort(s.begin(), s.end());
        stos.insert({raw_s, s});
        freq.insert({s, freq[s]++});
    }

    for (auto i: stos) {
        // cout << i.first << " "  << i.second << " " << freq[i.second] << endl;
        if (freq[i.second] == 1) st.insert(i.first);
    }
    for (auto i: st) {
        cout << i << endl;
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
