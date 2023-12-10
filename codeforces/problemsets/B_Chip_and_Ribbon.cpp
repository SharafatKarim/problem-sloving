#include <bits/stdc++.h>
using namespace std;

// Simple template by sharafat
typedef long long LL;
typedef pair<long long, long long> pii;
typedef pair<LL, LL> pll;
typedef pair<string, string> pss;
typedef vector<long long> vi;
typedef vector<vi> vvi;
typedef vector<pii> vii;
typedef vector<LL> vl;
typedef vector<vl> vvl;

typedef long long ll;

#define endl '\n'

void test()
{
    long long n;
    cin >> n;
    vi a(n);
    long long count = 0;
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i == 0 && a[i] >= 1)
            count = a[i] - 1;
        if (i > 0)
        {
            if (a[i] > a[i - 1])
            {
                // cout << "a[i] = " << a[i] - a[i - 1] << endl;
                count += a[i] - a[i - 1];
            }
        }
    }
    cout << count << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // Code starts here

    long long t;
    cin >> t;
    while (t--)
    {
        test();
    }

    // Code ends here
    return 0;
}