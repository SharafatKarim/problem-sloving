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
    ll n, d;
    cin >> n >> d;

    cout << "1 ";

    if (d == 3 || d == 6 || d == 9 || n >= 3)
        cout << "3 ";

    if (d == 5)
        cout << "5 ";
    
    if (d == 7 || n >= 3)
        cout << "7 ";

    if (d == 9 || (d == 3 && n >= 3) || (d == 6 && n >= 3) || n >= 6)
        cout << "9 ";

    cout << endl;
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