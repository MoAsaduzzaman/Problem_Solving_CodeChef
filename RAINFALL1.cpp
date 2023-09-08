//Problem name: RAINFALL1
//https://www.codechef.com/problems/RAINFALL1

#include<iostream>
using namespace std;
int main(){
    int T,X,i;

    cin >> T;

    for(i=0; i<T; i++){
        cin >> X;
        if(X<3){
            cout << "LIGHT" << endl;
        }
        if(X>=3 && X<7){
            cout << "MODERATE" << endl;
        }
        if(X>=7){
            cout << "HEAVY" << endl;
        }
    }

    return 0;
}