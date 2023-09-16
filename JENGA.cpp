//Problem name: JENGA
//https://www.codechef.com/problems/JENGA

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T,N,X;
    cin >> T;
    while(T--){
        cin >> N >> X;
        if(X%N==0){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

    return 0;
}