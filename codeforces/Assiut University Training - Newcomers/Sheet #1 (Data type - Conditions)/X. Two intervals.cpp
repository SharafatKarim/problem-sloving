#include <iostream>
using namespace std;

int main()
{
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    if (c >= a)
    {
        if (b < c)
            cout << -1 << endl;
        else 
            cout << c << " " << (b < d ? b: d) << endl;
    }
    else if (c < a)
    {
        if (d < a)
            cout << -1 << endl;
        else 
            cout << a << " " << (b > d ? d: b) << endl;
    }
    else
        cout << a << " " << (b > d ? d: b) << endl;
    return 0;
}