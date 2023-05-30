#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // print n digits
    int temp = n;
    int digits = 0;
    while (temp != 0)
    {
        temp /= 10;
        digits++;
    }
    for (int i = 0; i < digits; i++)
    {
        int digit = n % 10;
        n /= 10;
        cout << digit << endl;
    }
}