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
    LL a, b, n;
    cin >> a >> b >> n;

    LL total = b;
    while (n--)
    {
        LL temp;
        cin >> temp;
        if (temp >= a)
        {
            total += a - 1;
        }
        else
        {
            total += temp;
        }
    }
    cout << total << endl;
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
