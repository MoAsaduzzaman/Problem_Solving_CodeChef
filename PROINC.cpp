//Problem name: PROINC
//https://www.codechef.com/problems/PROINC

#include<iostream>
using namespace std;
int main(){

    int T,X,Y,a,ans;

    cin >> T;

    while(T--){

        cin >> X >> Y;

        a = X/10;
        ans = (X+a)-(X-Y);

        cout << ans << endl;

    }

    return 0;
}