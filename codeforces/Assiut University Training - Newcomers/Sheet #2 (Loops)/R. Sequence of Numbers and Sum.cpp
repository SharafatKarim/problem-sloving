#include<iostream>
using namespace std;

int main()
{
    int start, end, sum = 0;
    while (1)
    {
        cin >> start >> end;
        if (start <= 0 || end <= 0)
            break;
        if (start > end)
            swap(start, end);
        for (int i = start; i <= end; i++)
        {
            cout << i << " ";
            sum += i;
        }
        cout << "sum =" << sum << endl;
        sum = 0;
    }
}