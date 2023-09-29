//Problem name: CRICUP
//https://www.codechef.com/problems/CRICUP

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        int X,Y,D;
        cin >> X >> Y >> D;

        if(X>=Y){
            if((X-Y)<=D){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
        }else{
            if((Y-X)<=D){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}