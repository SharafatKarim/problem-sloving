#include <bits/stdc++.h>
using namespace std;

// Simple template by sharafat 
typedef long long LL;
typedef vector<LL> vl;

#define endl '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // Code starts here

    LL n;
    cin >> n;
    LL t = n;
    vl arr(n);
    LL odd = 0, even = 0, total = 0, even_sum, odd_sum;
    
    for (LL i=0; i<n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 == 0) even++, even_sum++;
        else odd++, odd_sum++;
        total += arr[i];
    }
    if (total % 2 != 0) cout << odd << endl;
    
    else cout << even << endl;    
    
    // Code ends here
    return 0;
}
