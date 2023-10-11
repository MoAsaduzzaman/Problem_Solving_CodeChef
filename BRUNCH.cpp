//Problem name: BRUNCH
//https://www.codechef.com/START103D/problems/BRUNCH

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T,X,Y;
    cin >> T;
    while(T--){
        cin >> X >> Y;
        int ans = X/Y;
        if(ans>20){
            cout << 20 << endl;
        }else{
            cout << ans << endl;
        }
    }

    return 0;
}