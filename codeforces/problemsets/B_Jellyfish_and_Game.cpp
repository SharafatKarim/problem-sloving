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
    LL n, m, k, sum = 0, sum2 = 0;
    cin >> n >> m >> k;
    vl j, g;
    for (LL i = 0; i < n; i++)
    {
        LL temp;
        cin >> temp;
        j.push_back(temp);
        sum += j[i];
    }
    for (LL i = 0; i < m; i++)
    {
        LL temp;
        cin >> temp;
        g.push_back(temp);
        sum2 += g[i];
    }

    sort(j.begin(), j.end(), greater<LL>());
    sort(g.begin(), g.end(), greater<LL>());

    LL final1 = sum - j[j.size() - 1] + g[0];
    LL final2 = sum2 - g[g.size() - 1] + j[0];

    LL min1 = j[j.size() - 1], min2 = g[g.size() - 1];
    LL m_min = (min1 > min2) ? min2 : min1;

    LL max1 = j[0], max2 = g[0];
    LL m_max = (max1 > max2) ? max1 : max2;

    if (k % 2 == 0)
    {
        if (final2 > sum2 && final1 <= sum)
            cout << sum + m_min - m_max << endl;
        else
            cout << sum << endl;
    }
    else
    {
        if (final1 > sum)
            cout << final1 << endl;
        else
            cout << sum << endl;
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
    {
        test();
    }

    // Code ends here
    return 0;
}
