//Problem name: FIZZBUZZ23_2 
//https://www.codechef.com/START106D/problems/FIZZBUZZ23_2

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        int N,X,D;
        cin >> N >> X >> D;
        int ans = (N/(X*5))+D;
        cout << ans << endl;
    }
    return 0;
}