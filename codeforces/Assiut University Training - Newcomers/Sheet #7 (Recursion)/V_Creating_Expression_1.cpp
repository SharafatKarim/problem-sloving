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

bool r(LL a[], LL n, LL x, LL t, LL i)
{
    // if (t==x) return true;

    // if (n < 0) return abs(t)==abs(x);
    if (i == n) return t==x;

    // t = a[n];
    bool A = r(a, n, x, t + a[i], i + 1);
    bool B = r(a, n, x, t - a[i], i + 1);

    return A || B;

    // if (t + r(a, n-1, x, t) == x) return x; 
    // if (t - r(a, n-1, x, t) == x) return x; 
    
    // if (A == x || B == x) return x;
    // return t;

    // return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // Code starts here

    LL n, x;
    cin >> n >> x;
    LL a[n];
    for (int i=0; i <n; i++) cin >> a[i];
    if (r(a, n, x, a[0], 1)) cout<< "YES";
    else cout << "NO";

    // Code ends here
    return 0;
}
