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

void test(LL n)
{
    cout << n << endl;
    // not solved
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // Code starts here

    LL n;
    cin >> n;
    vl ar;
    while (n--)
    {
        LL t;
        cin >> t;
        ar.push_back(t); 
    }
    for (int i = 0; i < ar.size(); i++) test(ar[i]);
    

    // Code ends here
    return 0;
}
