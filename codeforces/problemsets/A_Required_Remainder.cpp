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
    LL x, y, k;
    cin >> x >> y >> k;
    
    LL A = k - (k % x) + y;
    if (A <= k)
        cout << A << endl;
    else
        cout <<  k - (k % x) - (x-y) << endl;
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
