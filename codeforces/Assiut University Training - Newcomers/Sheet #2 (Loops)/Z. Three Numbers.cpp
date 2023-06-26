#include <iostream>
using namespace std;

int main()
{
    int k, s;
    cin >> k >> s;

    int i;
    int a, b, c, count = 0;

    for (a=0; a<=k; a++)
    {
        for (b=0; b<=k; b++)
        {
                if ( s - a - b <= k && s - a - b >= 0)
                {
                    // printf("a = %d, b = %d, c = %d\n", a, b, s - a - b);
                    count++;
                }
        }
    }
    cout << count << endl;
}
