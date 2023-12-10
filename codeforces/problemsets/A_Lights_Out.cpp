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

    LL m[3][3];
    LL n[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> m[i][j];
            n[i][j] = 1;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (m[i][j] % 2 != 0)
            {
                n[i][j] = n[i][j] == 0 ? 1 : 0;
                if (0 <= i + 1 && i + 1 < 3)
                    n[i + 1][j] = n[i + 1][j] == 0 ? 1 : 0;
                if (0 <= i - 1 && i - 1 < 3)
                    n[i - 1][j] = n[i - 1][j] == 0 ? 1 : 0;
                if (0 <= j + 1 && j + 1 < 3)
                    n[i][j + 1] = n[i][j + 1] == 0 ? 1 : 0;
                if (0 <= j - 1 && j - 1 < 3)
                    n[i][j - 1] = n[i][j - 1] == 0 ? 1 : 0;
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << n[i][j];
        }
        cout << endl;
    }

    // Code ends here
    return 0;
}
