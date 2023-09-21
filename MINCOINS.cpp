//Problem name: MINCOINS
//https://www.codechef.com/problems/MINCOINS

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T,X;
    cin >> T;
    while(T){
        cin >> X;
        int ans1;
        if(X%5==0){
            ans1 = (X/10)+(X%10)/5;
            cout << ans1 << endl;
        }else{
            cout << -1 << endl;
        }
        T--;
    }
    return 0;
}