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

void test()
{
    LL n, a, q;
    cin >> n >> a >> q;
    char c[q];
    LL init = a, cinit = a;
    bool yes = false, maybe = false;
    for (int i = 0; i < q; i++)
    {
        cin >> c[i];
        if (c[i] == '+')
        {
            init++;
            cinit++;
        }
        if (cinit >= n)
            maybe = true;
        if (init == n)
            yes = true;
        else if (c[i] == '-')
        {
            init--;
        }
    }
    if (yes)
        cout << "YES" << endl;
    else if (maybe)
        cout << "MAYBE" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // Code starts here

    LL t;
    cin >> t;
    while (t--)
    {
        test();
    }

    // Code ends here
    return 0;
}
