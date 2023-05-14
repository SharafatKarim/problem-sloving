#include <iostream>
using namespace std;

int main()
{
    long long a, b;
    char c;
    cin >> a >> c >> b;
    if ( c == '+')
        cout << a + b << endl;
    else if ( c == '-')
        cout << a - b << endl;
    else if ( c == '*')
        cout << a * b << endl;
    else if ( c == '/')
        cout << int(a / b) << endl;
    else
        cout << "Invalid operation" << endl;    
    return 0;
}