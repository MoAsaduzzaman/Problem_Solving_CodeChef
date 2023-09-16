//Problem name: FLOW007
//https://www.codechef.com/problems/FLOW007

#include<bits/stdc++.h>
using namespace std;
int main(){

    int T,N;
    cin >> T;
    while(T--){
        int rem,reverse=0;
        cin >> N;
        while(N!=0){
            rem = N%10;
            reverse = reverse*10+rem;
            N/=10;
        }
        cout << reverse << endl;
    }

    return 0;
}