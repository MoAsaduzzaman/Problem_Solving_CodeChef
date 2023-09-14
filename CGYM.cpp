//Problem name: CGYM
//https://www.codechef.com/problems/CGYM

#include<bits/stdc++.h>
using namespace std;
int main(){

    int T,X,Y,Z;
    cin >> T;
    while(T--){
        cin >> X >> Y >> Z;
        if((X+Y)<=Z){
            cout << "2" << endl;
        }else if(X<=Z){
            cout << "1" << endl;
        }else{
            cout << "0" << endl;
        }
    }

    return 0;
}