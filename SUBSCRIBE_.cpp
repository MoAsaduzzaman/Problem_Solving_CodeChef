//Problem name: SUBSCRIBE_
//https://www.codechef.com/problems/SUBSCRIBE_

#include<iostream>
using namespace std;
int main(){

    int T,N,X,ans1,ans2;

    cin >> T;

    while(T--){

        cin >> N >> X;

        if(N%6!=0){
            cout << ((N/6)*X + X) << endl;
        }else{
            cout << (N/6)*X << endl;
        }

    }

    return 0;
}