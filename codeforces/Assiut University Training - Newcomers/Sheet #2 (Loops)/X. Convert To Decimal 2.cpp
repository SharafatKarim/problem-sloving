#include <iostream>
using namespace std;

// long long int convertToDecimal(long double n)
// {
//     long double decimal = 0;
//     long double base = 1;
//     while (n > 0)
//     {
//         decimal += (int(n)%10) * base;
//         n /= 10;
//         base *= 2;
//     }
//     return decimal;
// }

// long long int reverseNumber(long long int n)
// {
//     long long int reverse = 0;
//     while (n > 0)
//     {
//         reverse = reverse * 10 + n % 10 ;
//         n /= 10;
//     }
//     return reverse;
// }

// long long int convertToBinary(long long int n)
// {
//     long long int binary = 0;
//     while (n>0)
//     {
//         binary = binary*10 + n%2;
//         n /= 2;
//     }
//     binary = reverseNumber(binary);
//     return binary;
// }

// long long int sumOfDigits(long long int n)
// {
//     long long int sum = 0;
//     while (n != 0)
//     {
//         if (n%10 == 1)
//             sum = sum * 10 + n%10;
//         n /= 10;
//     }
//     return sum;
// }

long long int convertToDecimal(long long int n)
{
    long long int decimal = 0;
    long long int base = 1;
    while (n--)
    {
        decimal += base;
        base *= 2;
    }
    return decimal;
}

long long int convertToBinary(long long int n)
{
    long long int binary = 0;
    long long int number_of_one = 0;
    while (n>0)
    {
        binary = binary*10 + n%2;
        // cout << " -> " << n%2 << endl;
        if (n%2 == 1)
            number_of_one++;
        n /= 2;
    }
    return number_of_one;
}

int main()
{
    long long int n;
    cin >> n;
    for (long long int i = 0; i < n; i++)
    {
        long long int a;
        cin >> a;
        
        if (a > 0)
        {
            // long long int binary = convertToBinary(a);
            // cout << binary << endl;
            // cout << convertToDecimal(binary) << endl;
            cout << convertToDecimal(convertToBinary(a)) << endl;
        }
        else
            cout << 0 << endl;
    }
    // cout << convertToBinary(10) << endl;
    // cout << convertToDecimal(2) << endl;
}