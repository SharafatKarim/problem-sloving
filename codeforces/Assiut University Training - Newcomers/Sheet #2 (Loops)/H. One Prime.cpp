#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // check n is prime or not
    bool isPrime = true;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    if (isPrime)
        cout << "YES";
    else
        cout << "NO";
}