//Problem name: MONOPOLY2
//https://www.codechef.com/problems/MONOPOLY2

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        int P,Q,R,S;
        int sum1,sum2,sum3,sum4;
        cin >> P >> Q >> R >> S;
        
        sum1 = P+Q+R;
        sum2 = P+Q+S;
        sum3 = P+R+S;
        sum4 = Q+R+S;

        if(S>sum1 || R>sum2 || Q>sum3 || P>sum4){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    } 
    return 0;
}