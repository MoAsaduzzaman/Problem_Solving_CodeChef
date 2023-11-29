// Problem name: SPCP2 
//https://www.codechef.com/START110D/problems/SPCP2

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >>T;
    while(T--){
        int X,N;
        cin >> X >> N;

        X = X*100;
        N  = N-X;

        int count = 0;

        while(N>0){
            count++;
            N-=100;
        }

        cout << count << endl;
    }
    return 0;
}

