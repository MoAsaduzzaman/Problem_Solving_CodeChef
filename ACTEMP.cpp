//Problem name: ACTEMP 
//https://www.codechef.com/problems/ACTEMP

#include<bits/stdc++.h>
using namespace std;
int main(){

    int T,A,B,C;
    cin >> T;
    while(T--){
        cin >> A >> B >> C;
        if(A<=B && B>=C){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }

    return 0;
}