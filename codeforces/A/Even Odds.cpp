#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long long a, b, d, e;
    cin >> a >> b;
    d = ( (a % 2 == 0) ? (a / 2) : ((a / 2) + 1));
    // cout << d << endl;
    // cout << b << endl;
    if ( d >= b )
        cout << ( 2 * b ) - 1 << endl;
    else
        cout << ( b - d ) * 2 << endl;
}
