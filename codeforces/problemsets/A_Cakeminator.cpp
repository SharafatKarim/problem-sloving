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

    LL r, c;
    cin >> r >> c;
    char arr[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < r; i++)
    {
        bool avail = true;
        for (int j = 0; j < c; j++)
        {
            if (arr[i][j] == 'S')
                avail = false;
        }
        if (avail)
        {
            for (int j = 0; j < c; j++)
            {
                arr[i][j] = '0';    
            }
        }
    }

    for (int i = 0; i < c; i++)
    {
        bool avail = true;
        for (int j = 0; j < r; j++)
        {
            if (arr[j][i] == 'S')
                avail = false;
        }
        if (avail)
        {
            for (int j = 0; j < r; j++)
            {
                arr[j][i] = '0';    
            }
        }
    }

    LL count = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (arr[i][j] == '0')
            {
                count++;
            }
        }
    }

    cout << count << endl;

    // Code ends here
    return 0;
}
