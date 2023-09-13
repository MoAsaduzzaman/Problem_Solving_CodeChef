//Problem name: MANIPULATE
//https://www.codechef.com/problems/MANIPULATE

#include<bits/stdc++.h>
using namespace std;
int main(){

    int T,X,Y;
    cin >> T;

    while(T--){
        cin >> X >> Y;
        if(X>=Y){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    
    return 0;
}