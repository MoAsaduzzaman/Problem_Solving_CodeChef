//Problem name: EXPIRY
//https://www.codechef.com/problems/EXPIRY

#include<iostream>
using namespace std;
int main(){

    int T,N,M,K;

    cin >> T;

    while(T--){

        cin >> N >> M >> K;

        if((M*K)>=N){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
        
    }

    return 0;
}