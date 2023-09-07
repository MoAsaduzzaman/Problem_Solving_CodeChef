//Problem name: PRIZEPOOL
//https://www.codechef.com/problems/PRIZEPOOL

#include<iostream>
using namespace std;
int main(){
    int T,X,Y,i,ttl_prz;

    cin >> T;

    for(i=0; i<T; i++){
        cin >> X >> Y;
        ttl_prz= (X*10)+(Y*90);
        cout << ttl_prz << endl;
    }

    return 0;
}