//Problem name: MINPIZZA
//https://www.codechef.com/problems/MINPIZZA

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        int N,X;
        cin >> N >> X;
        int mul = N*X;
        int ans = mul/4;

        if(mul%4==0){
            cout <<  ans << endl;
        }else{
            cout << ans+1 << endl;
        }
    }
    return 0;
}