#include <iostream>
using namespace std;
int main()
{
    int n;
    char st[100000];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> st;
        int count = 0;
        for (int j = 0; j < st[j] != '\0'; j++)
        {
            count++;
        }
        if (count > 10)
        {
            cout << st[0] << count - 2 << st[count - 1] << "\n";
        }
        else
        {
            cout << st << "\n";
        }
    }
}