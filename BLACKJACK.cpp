//Problem name: BLACKJACK
//https://www.codechef.com/problems/BLACKJACK

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T,A,B;
    cin >> T;
    while(T--){
        int ans;
        cin >> A >> B;
        ans = 21-(A+B);
        if(ans>=1 && ans<=10){
            cout << ans << endl;
        }else{
            cout << -1 << endl;
        }
    }
    return 0;
}