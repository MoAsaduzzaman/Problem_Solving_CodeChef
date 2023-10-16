//Problem name: REACHFAST
//https://www.codechef.com/problems/REACHFAST

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        int X,Y,K;
        cin >> X >> Y >> K;

        int ans1 = (Y-X)/K;
        int ans2 = 0;
        int ans3 = (X-Y)/K;

        if(X<Y){
            if((Y-X)%K==0){
                cout << ans1 << endl;
            }else{
                cout << ans1+1 << endl;
            }
        }

        if(X==Y){
            cout << ans2 << endl;
        }

        if(X>Y){
            if((X-Y)%K==0){
                cout << ans3 << endl;
            }else{
                cout << ans3+1 << endl;
            }
        }
    }
    return 0;
}