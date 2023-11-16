//Problem name: MD_RIEV 
//https://www.codechef.com/START108D/problems/MD_RIEV

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;

        if (n<=4){
            cout << 0 << " " << n << endl;
            continue;
        }
        cout << 1 << " " << n - 1 << endl;
    }

    return 0;
}