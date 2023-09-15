//Problem name: CHEFCAND
//https://www.codechef.com/problems/CHEFCAND

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T,N,X;
    cin >> T;
    while(T--){
        cin >> N >> X;
        if(X>=N){
            cout << "0" << endl; 
            continue;
        }
        int ans = (N-X);
        if(ans%4==0){
             cout << ans/4 << endl;
        }else if(ans%4!=0){
            cout << (ans/4)+1 << endl;
        }
    }

    return 0;
}