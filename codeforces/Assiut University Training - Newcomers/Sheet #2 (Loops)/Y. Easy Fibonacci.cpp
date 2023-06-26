#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i;
    int a = 0, b = 1, c;
    for (i=1; i<=n; i++)
    {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
}