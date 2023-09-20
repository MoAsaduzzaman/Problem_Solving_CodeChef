//Problem name: FILLCANDIES
//https://www.codechef.com/problems/FILLCANDIES

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T,N,K,M;
    cin >> T;
    while(T--){
        cin >> N >> M >> K;
        int bags = M*K;
        int ans = N/bags;
        int ans2 = N%bags;
        if(ans2==0){
            cout << ans << endl;
        }else{
            cout << ans+1 << endl;
        }
    }
    return 0;
}