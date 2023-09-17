//Problem name: POLTHIEF
//https://www.codechef.com/problems/POLTHIEF

#include<bits/stdc++.h>
using namespace std;
int main(){

    int T,X,Y;
    cin >> T;
    while(T--){
        cin >> X >> Y;
        cout << abs(X-Y) << endl;
    }

    return 0;
}