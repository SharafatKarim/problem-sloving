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
    ll n;
    cin >> n;
    vl ar(n);

    ll first = 0;
    ll second = 0;

    ll n1 = n;
    while (n--) {
        cin >> ar[n1-n];
    }

    sort(ar.begin(), ar.end());

    n = n1;
    while (n1--) {
        if (first < second) {
            first += ar[n-n1];
        } else {
            second += ar[n-n1];
        }
    }

    cout << abs(first - second) << endl;
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