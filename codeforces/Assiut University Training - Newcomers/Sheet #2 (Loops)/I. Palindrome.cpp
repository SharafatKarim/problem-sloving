#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // check n is prime or not
    bool isPalindrome = true;
    int temp = n;
    int reversed = 0;
    while (temp != 0)
    {
        reversed = reversed * 10 + temp % 10;
        temp /= 10;
    }
    if (reversed != n)
        isPalindrome = false;

    cout << reversed << endl;    
    if (isPalindrome)
        cout << "YES";
    else
        cout << "NO";
}