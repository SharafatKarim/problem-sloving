#include<iostream>
#include<math.h>
using namespace std;

void exe() {
    long long n, k;
    cin >> n >> k;
    long long less_1 = 0, weird_step = -1, temp, temp_two = n;
    bool one_not_found = true;
    for (long long i = 0; i < n; i++) {
        cin >> temp;
        if (temp == 1) one_not_found = false;
        if (one_not_found) less_1++;
        if (!one_not_found && temp < temp_two) weird_step++;
        temp_two = temp;
    } 
    cout << ceil((less_1+weird_step) / k) << "\n";
    // cout << weird_step << "\n";
}

int main() {
    long long test;
    cin >> test;
    while(test--) exe();
}