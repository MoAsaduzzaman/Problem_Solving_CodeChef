//Problem name: XJUMP
//https://www.codechef.com/problems/XJUMP

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T,X,Y;
    cin >> T;
    while(T--){
        cin >> X >> Y;
        if(X<Y){
            cout << X/1 << endl;
        }else{
            int dif = X/Y;
            int rem = X%Y;
            if(rem==0){
                cout << dif << endl;
            }else{
                cout << dif+(rem/1) << endl;
            }
        }
    }
    return 0;
}