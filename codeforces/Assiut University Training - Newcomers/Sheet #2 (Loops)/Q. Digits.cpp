#include <iostream>
using namespace std;

int main()
{
    int test_case;
    cin >> test_case;

    long long array[test_case];
    for (int i = 0; i < test_case; i++)
        cin >> array[i];

    int n;
    for (int i = 0; i < test_case; i++)
    {
        n = array[i];
        if (n != 0)
        {
            // print digits of n
            while (n)
            {
                cout << n % 10 << " ";
                n /= 10;
            }
            cout << endl;
        }
        else
            cout << 0 << endl;
    }
}