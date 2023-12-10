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

LL r(LL question, LL target, LL temp)
{
    // question = 2 target = 0
    if (question == 0)
    {
        if (target == temp)
            return 1;
        else
            return 0;
    }
    LL C = temp;
    // LL A = r(question - 1, target, temp + 1);
    // LL B = r(question - 1, target, temp - 1);
    if (r(question - 1, target, temp + 1) == 1 || r(question - 1, target, temp - 1) == 1)
        C += 1;
    cout << C << endl;
    return C;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // Code starts here

    string a, b;
    cin >> a >> b;

    LL ap = 0, am = 0, bp = 0, bm = 0, bq = 0;
    for (LL i = 0; i < a.size(); i++)
    {
        if (a[i] == '+')
            ap++;
        if (a[i] == '-')
            am++;
        if (b[i] == '+')
            bp++;
        if (b[i] == '-')
            bm++;
        if (b[i] == '?')
            bq++;
    }
    // cout << ap << " minus: " << am << endl;
    // cout << bp << " minus: " << bm << endl;

    LL equation_a = ap - am;
    LL equation_b = bp - bm;

    // cout << equation_a << endl;
    // cout << equation_b << endl;

    double probility = 0.0;
    if (bq > 0)
    {
        probility = r(bq, equation_a - equation_b, 0);
    }
    else if (equation_a == equation_b)
    {
        probility = 1.0;
    }

    // cout << probility << endl;
    printf("%.12f", probility);

    // Code ends here
    return 0;
}
