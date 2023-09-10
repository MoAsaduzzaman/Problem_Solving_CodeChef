//Problem name: F1RULE
//https://www.codechef.com/problems/F1RULE

#include<iostream>
using namespace std;
int main(){

    int T,X,Y;

    cin >> T;

    while(T--){

        cin >> X >> Y;

        if(X+(7*X/100)>=Y){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }

    }

    return 0;
}