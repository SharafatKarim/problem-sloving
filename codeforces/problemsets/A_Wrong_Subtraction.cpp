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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // Code starts here

    LL k, n;
    cin >> k >> n;

    for (LL i=0; i < n; i++)
    {
        if (k % 10 == 0)
            k /= 10;
        else
            k--;
    }

    cout << k << endl;

    // Code ends here
    return 0;
}
