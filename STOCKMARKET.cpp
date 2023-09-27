//Problem name: STOCKMARKET
//https://www.codechef.com/START102D/problems/STOCKMARKET

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        vector <int> A(N);
        for(int i=0; i<N; i++){
            cin >> A[i];
        }
        sort(A.begin(),A.end());
        int ans =0;

        for(int i=0; i<N; i++){
            ans+=A[i];
        }
        cout << ans-A[0] << endl;
    }
    return 0;
}