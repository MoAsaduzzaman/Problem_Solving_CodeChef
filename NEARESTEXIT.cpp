//Problem name: NEARESTEXIT
//https://www.codechef.com/problems/NEARESTEXIT

#include<bits/stdc++.h>
using namespace std;
int main(){

    int T,X;
    cin >> T;
    while(T--){
        cin >> X;
        if(X<=50){
            cout << "LEFT" << endl;
        }else{
            cout << "RIGHT" << endl;
        }
    }

    return 0;
}