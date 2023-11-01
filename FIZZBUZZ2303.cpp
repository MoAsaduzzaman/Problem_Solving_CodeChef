//Problem name: FIZZBUZZ2303
//https://www.codechef.com/START106D/problems/FIZZBUZZ2303

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        int ans = N*(N-1);
        cout << ans << endl;
    }
    return 0;
}