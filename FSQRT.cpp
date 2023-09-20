//Problem name: FSQRT
//https://www.codechef.com/problems/FSQRT

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T,N,ans;
    cin >> T;
    while(T--){
        cin >> N;
        ans = sqrt(N);
        cout << ans << endl;
    }
    return 0;
}