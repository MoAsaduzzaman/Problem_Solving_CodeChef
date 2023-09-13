//Problem name: FOOTCUP
//https://www.codechef.com/problems/FOOTCUP

#include<bits/stdc++.h>
using namespace std;
int main(){

    int T,X,Y;

    cin >> T;

    while(T--){
        cin >> X >> Y;
        if((X==Y) && (X!=0 || Y!=0)){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

    return 0;
}