//Problem name: SEVENRINGS 
//https://www.codechef.com/problems/SEVENRINGS

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T,N,X,ans;
    cin >> T;
    while(T--){
        cin >> N >> X;
        ans = N*X;
        std::string s = std::to_string(ans);
        
        if(s.length()==5 && s[0]!=0){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

    return 0;
}