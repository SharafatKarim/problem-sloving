#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, max_val=0;

    cin >> n;
  
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
       if(x>max_val){
        max_val=max(x,max_val);
       }
    }

cout<<max_val;

    return 0;
}