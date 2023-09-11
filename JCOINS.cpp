//Problem name: JCOINS
//https://www.codechef.com/problems/JCOINS

#include<iostream>
using namespace std;
int main(){

    int T,X,Y;

    cin >> T;

    while(T--){

        cin >> X >> Y;

        cout << (X*10)+(Y*5) << endl;

    }

    return 0;
}