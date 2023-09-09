//Problem name: COURSEREG
//https://www.codechef.com/problems/COURSEREG

#include<iostream>
using namespace std;
int main(){

    int T,N,M,K;

    cin >> T;

    while(T--){

        cin >> N >> M >> K;

        if((N+K)<=M){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }

    }
    
    return 0;
}