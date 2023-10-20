//Problem name: MOZZ
//https://www.codechef.com/problems/MOZZ

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        int X,Y,R;
        cin >> X >> Y >> R;

        int ans = ((R/30)+X);

        if(ans%Y==0){
            cout << ans/Y << endl;
        }else{
            cout << (ans/Y)+1 << endl;
        }
    }
    return 0;
}