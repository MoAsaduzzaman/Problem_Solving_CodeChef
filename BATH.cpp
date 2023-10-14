//Problem name: BATH
//https://www.codechef.com/problems/BATH

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        int X,Y;
        cin >> X >> Y;

        if((Y*2)>X){
            cout << 0 << endl;
        }else{
            cout << X/(Y*2) << endl;
        }
    }
    return 0;
}