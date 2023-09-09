//Problem name: CCHOCOLATES
//https://www.codechef.com/problems/CCHOCOLATES

#include<iostream>
using namespace std;
int main(){

    int T,X,Y,Z;

    cin >> T;

    while(T--){

        cin >> X >> Y >> Z;

        cout << ((X*5)+(Y*10))/Z << endl;

    }

    return 0;
}