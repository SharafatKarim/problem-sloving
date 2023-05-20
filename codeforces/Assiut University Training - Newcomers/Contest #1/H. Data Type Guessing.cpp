#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    long long a, b, c;
    double d;
    cin >> a >> b >> c;
    d = (((float) a * b ) / c);

    if (((float)d - floor(d)) == 0 )
        if ( (long long)d <= 2147483647 && (long long)d >= -2147483648 )
            cout << "int" << endl;
        else
            cout << "long long" << endl;
    else
        cout << "double" << endl;

    // cout << fixed << d << endl;
    cout << (abs(((long long)d) - d) == 0) << endl;
    cout << ceil(d) << endl;
    cout << floor(d) << endl;
    cout << (floor(d) == ceil(d)) << endl;
    return 0;
}