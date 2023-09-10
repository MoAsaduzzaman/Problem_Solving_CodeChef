//Problem name: WATERFLOW
//https://www.codechef.com/problems/WATERFLOW

#include<iostream>
using namespace std;
int main(){

    int T,W,X,Y,Z;

    cin >> T;

    while(T--){

        cin >> W >> X >> Y >> Z;

        if((Y*Z)+W==X){
            cout << "filled" << endl;
        }

        if((Y*Z)+W<X){
            cout << "Unfilled" << endl;
        }

        if((Y*Z)+W>X){
            cout << "overflow" << endl;
        }

    }

    return 0;
}