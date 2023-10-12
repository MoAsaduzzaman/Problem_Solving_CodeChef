//Problem name: FLOW004
//https://www.codechef.com/problems/FLOW004

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T,N;
    cin >> T;
    while(T--){
        cin >> N;
        int rem = N%10;

        while(N>9){
            N/=10;
        }
        cout << N+rem << endl;
    }
    return 0;
}