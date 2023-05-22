#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, c;
    double d;
    cin >> a >> b >> c;
    d = (a * b) / c;

    long long d1 = d;
    double d2 = d - d1 ;

    if ( d2 > 0 )
        cout << "double" << endl;
    else if ( d1 >= -2147483648 && d1 <= 2147483647 )
        cout << "int" << endl;
    else
        cout << "long long" << endl;
    return 0;
}