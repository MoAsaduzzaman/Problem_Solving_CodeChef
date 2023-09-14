//Problem name: MANGOES
//https://www.codechef.com/problems/MANGOES

#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int T,X,Y,Z,ans;
    cin >> T;
    while(T--){
        cin >> X >> Y >> Z;
        ans = (Z-Y)/X;
        cout << ans << endl;
    }

    return 0;
}