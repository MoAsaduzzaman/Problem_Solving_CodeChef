//Problem name: CANDYSTORE
//https://www.codechef.com/problems/CANDYSTORE

#include<iostream>
using namespace std;
int main(){

    int T,X,Y,ans;

    cin >> T;

    while(T--){

        cin >> X >> Y;

        if(X>=Y){
            cout << Y << endl;
        }else{
            ans = X + (Y-X)*2;
            cout << ans << endl;
        }

    }

    return 0;
}