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

    LL n, t, k, d;
    cin >> n >> t >> k >> d;

    // without second oven
    LL t1 = 0, n2 = n;
    while (n2 > 0)
    {
        t1 += t;
        n2 -= k;
    }

    // with second oven
    // LL f1, t1 = 0, n2 = n;
    LL t2, pt1 = 0, pt2 = d;
    while (1)
    {
        pt1 += t;
        n -= k;
        if (n <= 0)
        {
            t2 = pt1;
            break;
        }
        if (pt1 >= d)
        {
            pt2 += t;
            n -= k;
            if (n <= 0)
            {
                t2 = pt2;
                break;
            }
        }
    }

    if (t2 < t1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    // Code ends here
    return 0;
}
