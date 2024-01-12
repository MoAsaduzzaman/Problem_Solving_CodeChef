// Problem name: HATTRICK 
// https://www.codechef.com/problems/HATTRICK

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        string A,B,C,D,E,F;
        cin >> A >> B >> C >> D >> E >> F;

        string ans = "W";

        if(A==ans && B==ans && C==ans){
            cout << "YES" << endl;
        }else if(B==ans && C==ans && D==ans){
            cout << "YES" << endl;
        }else if(C==ans && D==ans && E==ans){
            cout << "YES" << endl;
        }else if(D==ans && E==ans && F==ans){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
        
    }

    return 0;
}