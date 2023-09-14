//Problem name: BATTERYLOW
//https://www.codechef.com/problems/BATTERYLOW

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T,X;
    cin >> T;
    while(T--){
        cin >> X;
        if(X<=15){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }

    return 0;
}