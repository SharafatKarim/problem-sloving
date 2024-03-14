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

void rec(LL n, vl &ar)
{
    if (n == 1)
        return;
    swap(ar[n-1], ar[n - 2]);
    rec(n - 1, ar);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // Code starts here

    LL n;
    cin >> n;
    vl ar(n);

    for (LL i = 0; i < n; i++)
        ar[i] = i + 1;

    rec(n, ar);

    for (LL i = 0; i < n; i++)
        cout << ar[i] << " ";

    // Code ends here
    return 0;
}
