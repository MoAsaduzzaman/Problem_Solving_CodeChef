//Problem name: C_RATING
//https://www.codechef.com/problems/C_RATING

#include<bits/stdc++.h>
using namespace std;
int main(){

    int T,X,Y,ans;
    cin >> T;
    while(T--){
        cin >> X >> Y;
        if(X==Y){
            cout << 0 << endl;
        }
        if(X<Y){
            int dif = Y-X;
            if(dif%8==0){
                ans = dif/8;
            }else{
                ans = (dif/8)+1;
            }
            cout << ans << endl;
        }
    }

    return 0;
}