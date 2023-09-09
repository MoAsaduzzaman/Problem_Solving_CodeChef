//Problem no: PARLIAMENT
//https://www.codechef.com/problems/PARLIAMENT

#include<iostream>
using namespace std;
int main(){

    int T;
    double N,X;

    cin >> T;

    while(T--){

        cin >> N >> X;

        if(N/2<=X){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }

    }

    return 0;
}