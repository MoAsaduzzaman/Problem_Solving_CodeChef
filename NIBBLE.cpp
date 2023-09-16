//Problem name: NIBBLE
//https://www.codechef.com/problems/NIBBLE

#include<bits/stdc++.h>
using namespace std;
int main(){

    int T,N;
    cin >> T;
    while(T--){
        cin >> N;
        if(N%4==0){
            cout << "Good" << endl;
        }else{
            cout << "Not Good" << endl;
        }  
    }

    return 0;
}