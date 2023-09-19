//Problem name: CHEFBOTTLE
//https://www.codechef.com/problems/CHEFBOTTLE

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T,N,X,K;
    cin >> T;
    while(T--){
        cin >> N >> X >> K;
        if((N*X)>=K){
            cout << K/X << endl;
        }else{
            cout << N << endl;
        }
    }
    return 0;
}