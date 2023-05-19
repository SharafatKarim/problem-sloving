#include <iostream>

using namespace std;

int main()
{
    int odd, even;
    cin >> odd >> even;

    if ( even == 0 && odd == 0)
    {
        cout << "NO" << endl;
        return 0;
    }

    int sum = even + odd;
    int even2 = even, odd2 = odd;
    int i;
    for (i = 1; i <= sum; i++)
    {
        if (i % 2 == 0)
        {
            even--;
            // cout << "even "<< i << " " << even << endl;
        }
        else
        {
            odd--;
            // cout << "odd "<< i << " " << odd << endl;
        }
        if (even < 0 || odd < 0)
        {
            break;
        }
    }
    // cout << even << " " << odd << endl;
    
    for (i = 1+1; i <= sum+1; i++)
    {
        if (i % 2 == 0)
        {
            even2--;
            // cout << "even "<< i << " " << even2 << endl;
        }
        else
        {
            odd2--;
            // cout << "odd "<< i << " " << odd2 << endl;
        }
        if (even2 < 0 || odd2 < 0)
        {
            break;
        }
    }
    // cout << even2 << " " << odd2 << endl;
    if (even == 0 && odd == 0 || even2 == 0 && odd2 == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    
    return 0;
}