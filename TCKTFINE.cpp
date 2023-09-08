//Problem name: TCKTFINE
//https://www.codechef.com/problems/TCKTFINE

#include<iostream>
using namespace std;
int main(){

    int T,X,P,Q;

    cin >> T;

    while(T--){

        cin >> X >> P >> Q;

        cout << (P-Q)*X << endl;
    }

    return 0;
}