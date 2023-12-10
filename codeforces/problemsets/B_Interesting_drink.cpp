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

LL binary_s(LL a[], LL n, LL e)
{
    // if (e < a[0])
    //     return 0;
    // else
    // {
        LL i = 0, j = n - 1;
        while (i <= j)
        {
            LL mid = (i + j) / 2;
            if (a[mid] == e)
            {
                while (a[mid+1]==e)
                    mid++;                
                return mid;
            }
            else if (a[mid] > e)
            {
                j = mid - 1;
            }
            else
            {
                i = mid + 1;
            }
        }
        return j;
    // }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // Code starts here

    LL n;
    cin >> n;
    LL a[n];
    for (LL i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);

    LL q;
    cin >> q;
    LL m[q];
    for (LL i = 0; i < q; i++)
    {
        cin >> m[i];
        cout << upper_bound(a, a + n, m[i]) - a << endl;
        // cout << binary_s(a, n, m[i]) + 1 << endl;
    }
    // for (auto i : a)
        // cout << i << " ";

    // Code ends here
    return 0;
}
