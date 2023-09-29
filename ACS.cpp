//Problem name: ACS
//https://www.codechef.com/problems/ACS

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T,P;
    cin >> T;
    while(T--){
        cin >> P;

        int divisible = P/100;
        int remainder = P%100;

        if((remainder+divisible)>10){  
            cout << -1 << endl;
        }else{
            cout << divisible+remainder << endl;
        }
    }
    return 0;
}