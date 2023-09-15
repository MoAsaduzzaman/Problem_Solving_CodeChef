//Problem name: SUGARCANE
//https://www.codechef.com/problems/SUGARCANE

#include<bits/stdc++.h>
using namespace std;
int main(){

    int T,N,P20,P30,ans,final_ans;
    cin >> T;
    while(T--){
        cin >> N;
        ans = N*50;
        P20 = (20*ans)/100;
        P30 = (30*ans)/100;

        final_ans = ans - P20 - P20 - P30;
        cout << final_ans << endl;
    }

    return 0;
}