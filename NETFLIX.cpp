//Problem name: NETFLIX
//https://www.codechef.com/problems/NETFLIX

#include<bits/stdc++.h>
using namespace std;
int main(){

    int T,A,B,C,X;
    cin >> T;
    while(T--){
        cin >> A >> B >> C >> X;
        if((A+B)>=X || (A+C)>=X || (B+C)>=X){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

    return 0;
}