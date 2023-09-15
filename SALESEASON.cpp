//Problem name: SALESEASON
//https://www.codechef.com/problems/SALESEASON

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T,X;
    cin >> T;
    while(T--){
        cin >> X;
        if(X<=100){
            cout << X << endl;
        }
        if(100<X && X<=1000){
            cout << X-25 << endl;
        }
        if(1000<X && X<=5000){
            cout << X-100 << endl;
        }
        if(X>5000){
            cout << X-500 << endl;
        }
    }

    return 0;
}