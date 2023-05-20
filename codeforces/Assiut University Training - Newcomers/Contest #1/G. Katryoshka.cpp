#include <iostream>
using namespace std;

int main()
{
    long long eye, mouth, body, count, temp;
    count = 0;
    cin >> eye >> mouth >> body;

    // while ( ((eye - 1) > 0 && body > 0 ) || (eye > 0 && body > 0 && mouth > 0 ) )
    // {
    //     if ( eye > 0 && body > 0 && mouth > 0 )
    //     {
    //         eye--;
    //         body--;
    //         mouth--;
    //         count++;
    //     }
    //     else if ( eye - 1 > 0 && body > 0 )
    //     {
    //         eye -= 2;
    //         body--;
    //         count++;
    //     }
    // }

    temp = min(min(eye, body), mouth);
    count += temp;
    eye -= temp;
    body -= temp;
    // cout << eye << " " << min(eye/2, body) << endl;
    count += min(eye/2, body);

    cout << count << endl;
}