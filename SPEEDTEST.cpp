//Problem name: SPEEDTEST
//https://www.codechef.com/problems/SPEEDTEST

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    float A,X,B,Y;
    cin >> T;
    while(T--){
        cin >> A >> X >> B >> Y;
        float ansA = A/X;
        float ansB = B/Y;
        if(ansA>ansB){
            cout << "Alice" << endl;
        }else if(ansA<ansB){
            cout << "Bob" << endl;
        }else if(ansA==ansB){
            cout << "Equal" << endl;
        }
    }
    return 0;
}