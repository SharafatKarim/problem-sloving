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

    LL res = 1;
    LL base = 1378;
    LL pow = n;

    while (pow != 0)
    {
        if (pow % 2 == 0)
        {
            base = (base * base) % 10;
            pow /= 2;
        }
        else
        {
            res = (res * base) % 10;
            pow--;
        }
    }

    cout << res << endl;

    // Code ends here
    return 0;
}
