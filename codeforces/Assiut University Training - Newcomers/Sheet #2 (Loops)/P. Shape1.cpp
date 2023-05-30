#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // print a left sided simple pyramid of stars
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
            cout << "*";
        cout << endl;
    }
}