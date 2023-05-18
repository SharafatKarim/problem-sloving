#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float percentage, price;
    cin >> percentage >> price;
    cout << fixed << setprecision(2) << 100 * price / (100 - percentage) << endl;
    return 0;
}