#include <iostream>
using namespace std;

int main()
{
    double n;
    cin >> n;
    // check n float or int
    if (n == (int)n)
        cout << "int " << n << endl;
    else
        cout << "float " << int(n) << " " << n - int(n) << endl;
    return 0;
}