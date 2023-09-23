//Problem name: PASSORFAIL
//https://www.codechef.com/problems/PASSORFAIL

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T,N,X,P;
    cin >> T;
    while(T--){
        cin >> N >> X >> P;
        int incorrect_ans = N-X;
        int ans = (X*3)+(incorrect_ans*(-1));
        if(ans>=P){
            cout << "PASS" << endl;
        }else{
            cout << "FAIL" << endl;
        }
    }
    return 0;
}
