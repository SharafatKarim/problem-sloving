#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while ( n >= 10)
        n /= 10;
    cout << (n%2 == 0 ? "EVEN" : "ODD") << endl;
    return 0;
}