//Problem no: CANCHEF
//https://www.codechef.com/problems/CANCHEF

#include<iostream>
using namespace std;
int main(){

    int T,X,Y;

    cin >> T;

    while(T--){

        cin >> X >> Y;

        if((X*15)>=(2*Y)){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }

    }

    return 0;
}