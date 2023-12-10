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
    bool possible = false;
    string a[n];
    LL i;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i][0] == a[i][1] && a[i][0] == 'O')
        {
            a[i][0] = '+';
            a[i][1] = '+';
            possible = true;
            break;
        }
        else if (a[i][3] == a[i][4] && a[i][3] == 'O')
        {
            a[i][3] = '+';
            a[i][4] = '+';
            possible = true;
            break;
        }
    }

    if (possible)
    {
        cout << "YES" << endl;
        for (LL j = 0; j <= i; j++)
        {
            cout << a[j] << endl;
        }
        for (i++; i < n; i++)
        {
            cin >> a[i];
            cout << a[i] << endl;
        }
    }
    else
        cout << "NO" << endl;

    // Code ends here
    return 0;
}
