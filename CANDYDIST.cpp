//Problem name: CANDYDIST
//https://www.codechef.com/problems/CANDYDIST

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T,N,M;
    cin >>T;
    while(T--){
        cin >> N >> M;
        int dif = N/M;
        if(N%M==0 && dif%2==0){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
    return 0;
}