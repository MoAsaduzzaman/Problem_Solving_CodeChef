//Problem name: ECOCLASS
//https://www.codechef.com/problems/ECOCLASS

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T,N;
    cin >> T;
    while(T--){
        int i,cnt=0;
        cin >> N;

        vector <int> S(N);
        vector <int> D(N);

        for(i=0; i<N; i++){
            cin >> S[i];
        }

        for(i=0; i<N; i++){
            cin >> D[i];
        }

        for(i=0; i<N; i++){
            if(S[i]==D[i]){
            cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}