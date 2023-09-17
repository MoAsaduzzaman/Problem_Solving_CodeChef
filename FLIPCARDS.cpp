//Problem name: FLIPCARDS
//https://www.codechef.com/problems/FLIPCARDS

#include<bits/stdc++.h>
using namespace std;
int main(){

    int T,N,X;
    cin >> T;
    while(T--){
        cin >> N >> X;
        if(N==X || X==0){
            cout << 0 << endl;
        }else{
            if((N-X)<X){
            cout << (N-X) << endl;
            }else{
                cout << X << endl;
            }
        } 
    }

    return 0;
}