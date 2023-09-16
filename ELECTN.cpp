//Problem name: ELECTN
//https://www.codechef.com/problems/ELECTN

#include<bits/stdc++.h>
using namespace std;
int main(){

    int T,A,X;
    cin >> T;
    while(T--){
        int N;
        int cnt=0;
        cin >> N >> X;
        while(N--){
            cin >> A;
            if(A>=X){
                cnt++;
            }else{
                cnt;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}