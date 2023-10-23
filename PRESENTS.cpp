//Problem name: PRESENTS
//https://www.codechef.com/problems/PRESENTS

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int N;
    cin >> N;

    int ans = N-(N/5);
    cout << ans << endl;

}

int main(){
    int T;
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
}