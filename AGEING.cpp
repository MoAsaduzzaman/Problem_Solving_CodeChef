//Problem name: AGEING
//https://www.codechef.com/problems/AGEING

#include<iostream>
using namespace std;
int main(){
    int T,X,i,ans;

    cin >> T;

    for(i=0; i<T; i++){
        cin >> X;
        ans = (X-20)+10;
        cout << ans << endl;
    }

    return 0;
}