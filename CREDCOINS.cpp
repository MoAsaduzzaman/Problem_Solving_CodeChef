//Problem name: CREDCOINS
//https://www.codechef.com/problems/CREDCOINS

#include<iostream>
using namespace std;
int main(){

    int T,X,Y;

    cin >> T;

    while(T--){

        cin >> X >> Y;

        cout << (X*Y)/100 << endl;

    }

    return 0;
}
