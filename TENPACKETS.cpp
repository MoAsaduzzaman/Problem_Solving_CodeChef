//Problem name: TENPACKETS
//https://www.codechef.com/problems/TENPACKETS

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T,X,Y,ans;
    cin >> T;
    while(T--){
        cin >> X >> Y;
        ans = (Y*2)+X;
        cout << ans << endl;
    }
    return 0;
}