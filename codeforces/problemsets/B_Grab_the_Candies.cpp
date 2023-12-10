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
    LL n;
    cin >> n;
    vl a(n);
    // vl even(n), odd(n);
    LL even_sum = 0, odd_sum = 0;
    for (LL i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
        {
            even_sum += a[i];
        }
        else
        {
            odd_sum += a[i];
        }
    }
    // sort(a.begin(), a.end());
    // for (LL i = 0; i < n; i++)
    // {
    //     if (i % 2 == 0)
    //     {
    //         // even.push_back(a[i]);
    //         even_sum += a[i];
    //     }
    //     else
    //     {
    //         // odd.push_back(a[i]);
    //         odd_sum += a[i];
    //     }
    // }
    // cout << "even_sum: " << even_sum << endl;
    // cout << "odd_sum: " << odd_sum << endl;
    if (even_sum > odd_sum)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // Code starts here

    LL t;
    cin >> t;
    while (t--)
        test();

    // Code ends here
    return 0;
}
