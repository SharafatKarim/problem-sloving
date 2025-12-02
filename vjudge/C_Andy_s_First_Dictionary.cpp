#include <bits/stdc++.h>
using namespace std;

// Simple template by sharafat 
typedef long long ll;
typedef vector<ll> vl;

#define all(s) s.begin(), s.end()
#define rall(s) s.rbegin(), s.rend()
 
#define endl '\n'

void Test(ll t) {
    string s, temp;
    set<string> st;
    while (cin >> s) {
        // cout << s << endl;
        for (char i: s) {
            if ('A' <= i && i <= 'Z')
                i += 32;
            else if (!('a' <= i && i <= 'z') ) {
                if (!temp.empty()) {
                    st.insert(temp);
                    temp = "";
                }
                continue;
            }
            // cout << i;
            temp += i;
        }
        if (!temp.empty()) 
            st.insert(temp);
        temp = "";
        // cout << endl;
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
