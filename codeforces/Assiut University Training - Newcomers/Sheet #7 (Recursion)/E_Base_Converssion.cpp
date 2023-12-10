#include <bits/stdc++.h>
using namespace std;

// Simple template by sharafat 
typedef long long LL;
typedef pair<int, int> pii;
typedef pair<LL, LL> pll;
typedef pair<string, string> pss;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vii;
typedef vector<LL> vl;
typedef vector<vl> vvl;

#define endl '\n'

void binary(int n)
{
    if (n <= 0) return;
    binary(n / 2);
    cout << n % 2;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // Code starts here

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        binary(n);
        cout << endl;
    }

    // Code ends here
    return 0;
}
