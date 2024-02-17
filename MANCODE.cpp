// Problem name: MANCODE 
// https://www.codechef.com/problems/MANCODE

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int min, max;
        max = (n / 2) + (n % 2);
        min = (n / 3) + (n % 3 != 0);

        cout << max << " " << min << endl;
    }
    return 0;
}