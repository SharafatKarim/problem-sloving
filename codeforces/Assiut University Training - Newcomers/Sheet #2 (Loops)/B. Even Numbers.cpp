#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    int i, status=0;

    for (i = 1 ; i <= a ; i++)
        if (i % 2 == 0)
        {
            cout << i << endl;
            status = 1;
        }
    if (status == 0)
        cout << -1 << endl;
    return 0;
}