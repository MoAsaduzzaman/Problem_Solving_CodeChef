//Problem name: LASTLEVELS
//https://www.codechef.com/problems/LASTLEVELS

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T,X,Y,Z;
    cin >> T;
    while(T--){
        int dif,rem;
        int ans;
        cin >> X >> Y >> Z;
        if(X<=3){
            cout << X*Y << endl;
        }else{
            dif = X/3;
            rem = X%3;
            if(rem!=0){
                ans = (rem*Y)+(dif*3*Y)+(dif*Z);
                cout << ans << endl;
            }else{
                ans = (dif*3*Y)+((dif-1)*Z);
                cout << ans << endl;
            }
        }
    }
    return 0;
}