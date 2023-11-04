//Problem name: CHANGEPOS 
//https://www.codechef.com/problems/CHANGEPOS

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        int X1,Y1,X2,Y2;
        cin >> X1 >> Y1 >> X2 >> Y2;

        if(X1==X2 || Y1==Y2){
            cout << 2 << endl;
        }else{
            cout << 1 << endl;
        }
    }
    return 0;
}