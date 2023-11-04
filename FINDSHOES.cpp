//Problem name: FINDSHOES 
//https://www.codechef.com/problems/FINDSHOES

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        int N,M;
        cin >> N >> M;

        if(N<=M){
            cout << N << endl;
        }else{
            cout << (N*2)-M << endl;
        }
    }
    return 0;
}