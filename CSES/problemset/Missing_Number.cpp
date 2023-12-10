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
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    // Code starts here

    LL n;
    cin >> n;

    LL m[n - 1];
    for (int i = 0; i < n - 1; i++)
    {
        cin >> m[i];
    }
    sort(m, m + n - 1);
    for (int i = 1; i <= n; i++)
    {
        if (i != m[i-1])
        {
            cout << i;
            break;
        }
    }

    // Code ends here
#ifndef ONLINE_JUDGE
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
#endif
    return 0;
}
