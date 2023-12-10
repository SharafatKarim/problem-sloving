#include <bits/stdc++.h>
using namespace std;

// Simple template by sharafat 
#define endl '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // Code starts here

    int number;
    cin >> number;

    map<string, int> m_array;
    for (int i=0; i < number; i++)
    {
        string s;
        cin >> s;
        m_array[s]++;
    }

    int max = 0;
    string max_string;
    for (auto i : m_array)
    {
        if (i.second > max)
        {
            max = i.second;
            max_string = i.first;
        }
    }

    cout << max_string << endl;

    // Code ends here
    return 0;
}
