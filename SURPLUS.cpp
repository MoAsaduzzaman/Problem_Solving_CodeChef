//Problem name: SURPLUS
//https://www.codechef.com/problems/SURPLUS

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T,A1,A2,B1,B2;
    cin >> T;
    while(T--){
        cin >> A1 >> A2 >> B1 >> B2;
        if(((A1-A2)+(B1-B2))<0){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}