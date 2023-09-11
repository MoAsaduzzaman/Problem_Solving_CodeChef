//Problem name: OFFICE
//https://www.codechef.com/problems/OFFICE

#include<iostream>
using namespace std;
int main(){

    int T,X,Y;

    cin >> T;

    while(T--){

        cin >> X >> Y;

        cout << (X*4)+Y << endl;

   }

    return 0;
}