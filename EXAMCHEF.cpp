//Problem name: EXAMCHEF 
//https://www.codechef.com/START111D/problems/EXAMCHEF

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        int X,Y,Z;
        cin >> X >> Y >> Z;

        int pass50per = (X*Y*50)/100;

        if(pass50per<Z){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

    return 0;
}