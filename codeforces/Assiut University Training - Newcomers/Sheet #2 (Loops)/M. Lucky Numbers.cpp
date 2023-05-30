#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int i;
    bool atleastOneLucky = false;
    
    for (i = a; i <= b; i++)
    {
        // check i is lucky or not
        int temp = i;
        bool isLucky = true;
        while (temp != 0)
        {
            int digit = temp % 10;
            if (digit != 4 && digit != 7)
            {
                isLucky = false;
                break;
            }
            temp /= 10;
        }
        if (isLucky)
        {
            cout << i << " ";
            atleastOneLucky = true;
        }
    }
    if (!atleastOneLucky)
        cout << -1 << endl;
}