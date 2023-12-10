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

    LL n;
    cin >> n;

    if (n != 2 && n != 3)
    {
        for (LL i = 1; i <= n; i++)
        {
            if (i % 2 == 0)
                cout << i << " ";
        }
        for (LL i = 1; i <= n; i++)
        {
            if (i % 2 != 0)
                cout << i << " ";
        }
    }
    else
    {
        cout << "NO SOLUTION" << endl;
    }

    // Code ends here
    return 0;
}
