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

    string ar[4];
    cin >> ar[0] >> ar[1] >> ar[2] >> ar[3];
    // cout << ar[1][0] << endl;

    bool possible = false;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int hash = 0, dot = 0;
            for (int k = i; k < i + 2; k++)
            {
                for (int l = j; l < j + 2; l++)
                {
                    // cout << ar[k][l];
                    if (ar[k][l] == '#')
                        hash++;
                    if (ar[k][l] == '.')
                        dot++;
                }
            }
            // cout << hash << dot << " ";
            if (hash >= 3 || dot >= 3)
                possible = true;
        }
        // cout << endl;
    }
    if (possible)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    // Code ends here
    return 0;
}
