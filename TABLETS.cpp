//Problem name: TABLETS
//https://www.codechef.com/problems/TABLETS

#include<iostream>
using namespace std;
int main(){

    int T,X,Y,ans;

    cin >> T;

    while(T--){

        cin >> X >> Y;

        ans = X*3;

        if(ans<=Y){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

    return 0;
}