//Problem name: PARTY2
//https://www.codechef.com/problems/PARTY2

#include<iostream>
using namespace std;
int main(){

    int T,N,X,K;

    cin >> T;

    while(T--){

        cin >> N >> X >> K;

        if((N*X)<=K){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

    return 0;
}