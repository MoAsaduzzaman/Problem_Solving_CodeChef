//Problem name: POLYBAGS
//https://www.codechef.com/problems/POLYBAGS

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T,N;
    cin >> T;
    while(T--){
        cin >> N;

        if(N%10==0){
            cout << N/10 << endl;
        }else{
            cout << (N/10)+1 << endl;
        }
    }

    return 0;
}