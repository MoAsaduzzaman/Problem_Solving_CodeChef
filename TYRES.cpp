//Problem name: TYRES
//https://www.codechef.com/problems/TYRES

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T,N;
    cin >> T;
    while(T--){
        cin >> N;
        if(N%4==0){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
        }
    }
    
    return 0;
}