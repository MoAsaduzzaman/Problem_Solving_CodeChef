//Problem name: KITCHENSPICE
//https://www.codechef.com/problems/KITCHENSPICE

#include<iostream>
using namespace std;
int main(){

    int T,X;

    cin >> T;

    while(T--){
        
        cin >> X;

        if(X<4){
            cout << "MILD" << endl;
        }
        if(X>=4 && X<7){
            cout << "MEDIUM" << endl;
        }
        if(X>=7){
            cout << "HOT" << endl;
        }

    }

    return 0;
}