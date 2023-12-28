// Problem name: PAINTCHRIS 
// https://www.codechef.com/START114D/problems/PAINTCHRIS

#include<bits/stdc++.h>
using namespace std;

int asad(int X, int Y, int Z){

    int ans = X*Y*2;

    return Z/ans;
    
}

int main(){
    int T;
    cin >> T;
    while(T){
        int X,Y,Z;
        cin >> X >> Y >> Z;
        cout << asad(X,Y,Z) << endl;
        T--;
    }
    return 0;
}