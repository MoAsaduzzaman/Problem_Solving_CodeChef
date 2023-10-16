//Problem name: FLOW018
//https://www.codechef.com/problems/FLOW018

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;

        int ans = 1;

        for(int i=1; i<=N; i++){
            ans*=i;
        }

        cout << ans << endl;
    }
    return 0;
}