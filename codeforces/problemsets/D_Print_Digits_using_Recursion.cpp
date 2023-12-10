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

void recursion(LL n)
{
    if (n <= 0) return;
    recursion(n/10);
    cout << n % 10 << " ";
}

void test()
{
    LL n;
    cin >> n;
    if (n == 0) cout << 0 << " ";
    recursion(n);
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // Code starts here

    LL n;
    cin >> n;
    while (n--) test();

    // Code ends here
    return 0;
}
