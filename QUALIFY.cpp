//Problem name: QUALIFY
//https://www.codechef.com/problems/QUALIFY

#include<bits/stdc++.h>
using namespace std;
int main(){

    int T,X,A,B;
    cin >> T;
    while(T--){
        cin >> X >> A >> B;
        int ans = (A*1) + (B*2);
        if(X<=ans){
            cout <<  "Qualify" << endl;
        }else{
            cout << "NotQualify" << endl;
        }
    }
    
    return 0;
}