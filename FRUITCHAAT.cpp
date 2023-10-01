//Problem name: FRUITCHAAT
//https://www.codechef.com/problems/FRUITCHAAT

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T,X,Y;
    cin >> T;
    while(T--){
        cin >> X >> Y;

        int banannas = X/2;

        if(Y>=banannas){
            cout << banannas << endl;
        }else{
            cout << Y << endl;
        }
    }
    return 0;
}