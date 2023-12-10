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

LL r(LL n, LL e)
{
    if (n == e) return 1;
    if (n > e) return 0;

    LL sum = 0;
    for (int i = 1; i <= 3; i++)
    {
        sum += r(n+i, e);
    }
    return sum;
} 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // Code starts here

    LL n, e;
    cin >> n >> e;
    cout << r(n, e);

    // Code ends here
    return 0;
}
