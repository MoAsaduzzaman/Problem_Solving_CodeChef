//Problem name: ADVANCE
//https://www.codechef.com/problems/ADVANCE

#include<iostream>
using namespace std;
int main(){

    int T,X,Y;

    cin >> T;

    while(T--){

        cin >> X >> Y;

        int ans = X+200;

        if(Y>=X && Y<=(X+200)){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }

    }

    return 0;
}