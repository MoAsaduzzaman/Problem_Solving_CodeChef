//Problem name: WATERCOOLER2
//https://www.codechef.com/problems/WATERCOOLER2

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T,X,Y,i;
    cin >> T;
    while(T--){
        cin >> X >> Y;
        if(X>=Y){
            cout << 0 << endl;
        }else{
            cout << (Y-1)/X << endl;
        }
    }
    return 0;
}