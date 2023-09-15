//Problem name: NOTEBOOK
//https://www.codechef.com/problems/NOTEBOOK

#include<bits/stdc++.h>
using namespace std;
int main(){

    int T,N,ans;
    cin >> T;
    while(T--){
        cin >> N;
        ans = (N*1000)/100;
        cout << ans << endl;
    }
    
    return 0;
}