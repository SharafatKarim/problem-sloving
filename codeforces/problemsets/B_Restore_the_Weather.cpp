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
    LL n, k;
    cin >> n >> k;
    
    vl vanc;
    vector <pair <LL, LL>> s_arr;
    map<LL, LL> answer;

    for (LL i=0; i < n; i++)
    {
        LL temp;
        cin >> temp;
        // sorted[temp] = i;
        // array.push_back(temp);
        s_arr.push_back({temp, i});
    }
    // sort(sorted.begin(), sorted.end());
    sort(s_arr.begin(), s_arr.end());
    // map <LL, LL>sorted (s_arr.begin(), s_arr.end());
    for (LL i=0; i<n; i++)
    {
        LL temp;
        cin >> temp;
        vanc.push_back(temp);
    }
    sort(vanc.begin(), vanc.end());
    for (LL i=0; i<n; i++)
    {
        LL temp = s_arr[i].second;
        answer[temp] = vanc[i];
        // cout << answer[i] << " ";
        // cout << s_arr[i].second << " ";
    }
    // cout << endl;
    for (LL i=0; i<n; i++)
    {
        cout << answer[i] << " ";
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // Code starts here

    LL t;
    cin >> t;
    while (t--) test();

    // Code ends here
    return 0;
}
