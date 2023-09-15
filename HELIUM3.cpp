//Problem name: HELIUM3
//https://www.codechef.com/problems/HELIUM3

#include<bits/stdc++.h>
using namespace std;
int main(){

    int T,A,B,X,Y;
    cin >> T;
    while(T--){
        cin >> A >> B >> X >> Y;
        if((A*B)<=(X*Y)){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }

    return 0;
}