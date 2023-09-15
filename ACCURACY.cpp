//Problem name: ACCURACY 
//https://www.codechef.com/problems/ACCURACY

#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int T,X;
    cin >> T;
    while(T--){
        cin >> X;
        int ans = X%3;
        if(ans==0){
        cout << ans << endl;
        }else{
            cout << 3-ans << endl;
        }
    }

    return 0;
}