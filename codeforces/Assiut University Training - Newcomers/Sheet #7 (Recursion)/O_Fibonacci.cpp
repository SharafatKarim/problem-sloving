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

LL fibo(LL n, map<LL, LL>& m)
{
    if (m.find(n) != m.end())
        return m[n];
    if (n <= 1)
        return 0;
    if (n == 2)
        return 1;
    return m[n] = fibo(n - 1, m) + fibo(n - 2, m);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // Code starts here

    LL n;
    cin >> n;

    map<LL, LL> m;
    cout << fibo(n, m);

    // Code ends here
    return 0;
}
