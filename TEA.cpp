//Problem name: TEA
//https://www.codechef.com/problems/TEA

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T,X,Y,Z;
    cin >> T;
    while(T--){
        cin >> X >> Y >> Z;
        if(X<Y){
            cout << Z << endl;
        }else{
            int ans = (X/Y);
            if(X%Y==0){
                cout << ans*Z << endl;
            }else{
                cout << (ans*Z)+Z << endl;
            } 
        }
    }
    return 0;
}