// Problem name: PBREV 
// https://www.codechef.com/START122D/problems/PBREV

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll T;
    cin >> T;

    while(T--){
        ll N;
        cin >> N;

        vector <ll> S(N);

        bool ans = true;

        for(ll i=0; i<N; i++){
            cin >> S[i];
            if(S[i]<=4) ans = false;
        }

        if(ans==true) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}