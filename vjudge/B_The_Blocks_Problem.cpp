#include <bits/stdc++.h>
using namespace std;

// Simple template by sharafat 
typedef long long ll;
typedef vector<ll> vl;

#define all(s) s.begin(), s.end()
#define rall(s) s.rbegin(), s.rend()
 
#define endl '\n'

void Test(ll t) {
    int n;
    cin >> n;
    vector<stack<int>> arr;
    for (int i=0; i<n ;i++) {
        stack<int> st;
        st.push(i);
        arr.push_back(st);
    }

    while (true) {
        string ss;
        int a, b;
        cin >> ss;
        if (ss == "quit") {
            break;
        }
        cin >> a >> ss >> b;
        // cout << a << " " << b << endl;

        // wrong logic
        // stack<int> stc;
        // // arr[a] = arr[a];
        // // arr[b] = arr[b];

        // while (!arr[a].empty()) {
        //     int temp = arr[a].top();
        //     stc.push(temp);
        //     arr[a].pop();
        // }
        // while (!stc.empty()) {
        //     int temp = stc.top();
        //     arr[b].push(temp);
        //     stc.pop();
        // }
    }
    
    // print
    for (int i=0; i<n ;i++) {
        stack<int> st;
        st = arr[i];
        cout << i << ": ";

        while (!st.empty()) {
            int temp = st.top();
            cout << temp << " ";
            st.pop();
        }
        cout << endl;
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
