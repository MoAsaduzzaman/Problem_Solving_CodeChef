// Problem name: NGRS 
// https://www.codechef.com/problems/NGRS

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        int X,Y;
        cin >> X >> Y;

        if(X<50) cout << "Z" << endl;
        else if(X>=50 && Y<50) cout << "F" << endl;
        else cout << "A" << endl;
    }
    return 0;
}