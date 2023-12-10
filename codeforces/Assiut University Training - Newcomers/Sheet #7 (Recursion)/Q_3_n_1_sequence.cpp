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

LL r(LL n)
{
    if (n == 1) return 1;
    LL sum = 0;
    if (n % 2 == 0)
        sum += r(n / 2);
    else
        sum += r(3 * n + 1);
    sum++;
    return sum;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // Code starts here

    LL n;
    cin >> n;
    cout << r(n);

    // Code ends here
    return 0;
}
