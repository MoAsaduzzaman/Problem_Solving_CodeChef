//Problem name: WAITTIME
//https://www.codechef.com/problems/WAITTIME

#include<iostream>
using namespace std;
int main(){
    int T,K,X,i,ans;

    cin >> T;

    for(i=0; i<T; i++){
        cin >> K >> X;
        ans = (K*7)-X;
        cout << ans << endl;
    }

    return 0;
}