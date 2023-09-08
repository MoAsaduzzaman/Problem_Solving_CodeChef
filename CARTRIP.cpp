//Problem name: CARTRIP
//https://www.codechef.com/problems/CARTRIP

#include<iostream>
using namespace std;
int main(){

    int T,X,a=3000,ans;

    cin >> T;

    while(T--){

        cin >> X;

        ans = X*10;

        if(ans<=3000){
            cout << a << endl;
        }else{
            cout << ans << endl;
        }
    }

    return 0;
}