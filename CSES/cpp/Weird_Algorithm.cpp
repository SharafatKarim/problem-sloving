#include <bits/stdc++.h>
// #include <iostream>
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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Code starts here

    LL n;
    cin >> n;

    while (n != 1)
    {
        if (n%2 == 0)
        {
            cout << n << " ";
            n /= 2;
        }
        else 
        {
            cout << n << " ";
            n = n * 3 + 1 ;
        }
    }
    cout << n << endl;

    // Code ends here
    return 0;
}
