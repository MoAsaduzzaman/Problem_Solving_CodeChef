//Problem name: BUYLAMP
//https://www.codechef.com/problems/BUYLAMP

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        int N,K,X,Y;
        cin >> N >> K >> X >> Y;

        int blue = min(X,Y);
        int red = K*X;

        int ans = red+(N-K)*blue;

        cout << ans << endl;
    }
    return 0;
}