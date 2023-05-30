#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // print prime between 2 and n
    for (int i = 2; i <= n; i++)
    {
        // check i is prime or not
        bool isPrime = true;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
            cout << i << " ";
    }
}