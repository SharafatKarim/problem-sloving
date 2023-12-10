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

    LL n;
    cin >> n;
    LL na[n];
    map<LL,LL> pn;
    for (LL i = 0; i < n; i++)
    {
        cin >> na[i];
        pn[na[i]] = i; 
    }

    LL t;
    cin >> t;
    LL ta[t];
    LL ca = 0, cb = 0;
    for (LL i = 0; i < t; i++)
    {
        cin >> ta[i];
        ca += pn[ta[i]] + 1;
        cb += n - pn[ta[i]];
    }

    // sort(ta, ta+ t);
    // sort(na, na+ n);
    // for (LL i = 0; i < t; i++)
    // {
    //     j = 0;
    //     while (j < n)
    //     {
    //         if (na[j] == ta[i])
    //         {
    //             ca += j + 1;
    //             cb += n - j;
    //         }
    //         j++;
    //     }
    // }

    cout << ca << " " << cb << endl;

    // Code ends here
    return 0;
}
