//Problem name: WGHTS
//https://www.codechef.com/problems/WGHTS

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T,W,X,Y,Z;
    cin >> T;
    while(T--){
        cin >> W >> X >> Y >> Z;
        if(W==(X+Y) || W==(X+Z) || W==(Y+Z) || W==(X+Y+Z) || (W==X) || (W==Y) || (W==Z)){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}