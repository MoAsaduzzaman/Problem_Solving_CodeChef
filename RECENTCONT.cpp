//Problem name: RECENTCONT
//https://www.codechef.com/problems/RECENTCONT

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int N;
    cin >> N;
    vector <string> S(N);

    int s = 0;
    int l = 0;

    for(int i=0; i<N; i++){
        cin >> S[i];
        if(S[i]=="START38"){
            s++;
        }else{
            l++;
        }
    }
    cout << s << " " << l << endl;
}

int main(){
    int T;
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
}