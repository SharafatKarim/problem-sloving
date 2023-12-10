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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // Code starts here

    string s;
    cin >> s;

    LL n = s.length();
    char prev = s[0];
    LL count = 1;
    for (LL i=1; i < n; i++)
    {
        if (s[i] == prev)
        {
            count++;
            if (count == 7)
            {
                cout << "YES" << endl;
                return 0;
            }
        }
        else
        {
            prev = s[i];
            count = 1;
        }
    }
    cout << "NO" << endl;

    // Code ends here
    return 0;
}
