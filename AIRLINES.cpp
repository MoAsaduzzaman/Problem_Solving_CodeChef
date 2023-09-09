//Problem name: AIRLINES
//https://www.codechef.com/problems/AIRLINES

#include<iostream>
using namespace std;
int main(){

    int T,X,Y,Z;

    cin >> T;

    while(T--){

        cin >> X >> Y >> Z;

        if((X*10)>=Y){
            cout << Y*Z << endl;
        }
        if((X*10)<Y){
            cout << X*10*Z << endl;
        }

    }

    return 0;
}