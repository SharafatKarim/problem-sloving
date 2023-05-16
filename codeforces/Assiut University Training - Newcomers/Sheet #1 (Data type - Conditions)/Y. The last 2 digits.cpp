#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    a = a % 100;
    b = b % 100;
    c = c % 100;
    d = d % 100;
    cout << fixed << setw(2) << setfill('0') << (a * b * c * d) % 100 << endl;
    return 0;
}