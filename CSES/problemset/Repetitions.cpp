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

    // string s;
    // cin >> s;

    // LL l = s.length();
    // LL max = 0;
    // for (int i=0; i < l; i++)
    // {
    //     // cout << s[i] << " ";
    //     char c = s[i];
    //     int count = 0;
    //     for (int j = i; j < l; j++)
    //     {
    //         if (s[j] == c)
    //         {
    //             count++;
    //         }
    //         else
    //         {
    //             i = j;
    //             break;
    //         }
    //     }
    //     if (count > max)
    //         max = count;
    // }
    // cout << max << endl;


    char c;
    char t;
    LL ti = 0;
    LL ma = 1;
    while (c != '\n')
    {
        c = getchar();
        if (c == t)
        {
            ti++;
            if (ma < ti)
            {
                ma = ti;
            }
        }
        else
        {
            t = c;
            ti = 1;
        }

    }
    cout << ma << endl;

    return 0;
}
