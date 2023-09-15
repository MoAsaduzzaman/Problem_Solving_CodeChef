//Problem name: TRUESCORE
//https://www.codechef.com/problems/TRUESCORE

#include<bits/stdc++.h>
using namespace std;
int main(){

    int T,A,B,C,D;
    cin >> T;
    while(T--){
        cin >> A >> B >> C >>D;
        if(A<=C && B<=D){
            cout << "POSSIBLE" << endl;
        }else{
            cout << "IMPOSSIBLE" << endl;
        }
    }

    return 0;
}
