//Problem name: CHEFCHOCO
//https://www.codechef.com/problems/CHEFCHOCO

#include<iostream>
using namespace std;
int main(){

    int T,C,X,Y;

    cin >> T;

    while(T--){

        cin >> C >> X >> Y;

        cout << (C-X)*Y << endl;

    }
    
    return 0;
}