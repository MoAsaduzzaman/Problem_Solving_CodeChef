//Problem name: DOREWARD
//https://www.codechef.com/problems/DOREWARD

#include<iostream>
using namespace std;
int main(){

    int T,X;

    cin >> T;

    while(T--){

        cin >> X;

        if(X<=3){
            cout << "BRONZE" << endl;
        }
        if(X>3 && X<=6){
            cout << "SILVER" << endl;
        }
        if(X>6){
            cout << "GOLD" << endl;
        }

    }

    return 0;
}