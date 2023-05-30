#include <iostream>
using namespace std;

int main()
{
    int n;
    char S;
    cin >> S >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < arr[i]; j++)
            cout << S;
        cout << endl;
    }
}