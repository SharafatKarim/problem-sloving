#include <iostream>
using namespace std;

int main()
{
    long long a, b, c;
    cin >> a >> b >> c;
    // assign a, b, c to d, e, f
    long long d, e, f;
    d = a;
    e = b;
    f = c;
    // sort a, b, c
    if (a > b)
        swap(a, b);
    if (a > c)
        swap(a, c);
    if (b > c)  
        swap(b, c);

    cout << a << endl << b << endl << c << endl;
    cout << endl;
    cout << d << endl << e << endl << f << endl;
    return 0;
}