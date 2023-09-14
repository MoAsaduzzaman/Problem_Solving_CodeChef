//Problem name: BOBBANK
//https://www.codechef.com/problems/BOBBANK

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T,W,X,Y,Z,ans;
    cin >> T;
    while(T--){
        cin >> W >> X >> Y >> Z;
        ans = W+(X*Z)-(Y*Z);
        cout << ans << endl;
    }

    return 0;
}