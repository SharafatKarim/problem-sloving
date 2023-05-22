#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    if ((a%10) % (a/10) == 0 || (a/10) % (a%10) == 0)
        cout << "YES";
    else
        cout << "NO";
}