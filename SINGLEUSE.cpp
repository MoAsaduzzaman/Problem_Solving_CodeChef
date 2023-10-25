//Problem name: SINGLEUSE
//https://www.codechef.com/problems/SINGLEUSE

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        int X,Y,H;
        cin >> X >> Y >> H;

        if(Y>H){
             cout<<ceil(X/(Y*1.0))<<endl;
        }
        else{
            X-=H;
            cout<<ceil(X/(Y*1.0))+1<<endl;
        } 
    }
    return 0;
}