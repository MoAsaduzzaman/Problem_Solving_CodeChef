//Problem name: CHESSTIME
//https://www.codechef.com/problems/CHESSTIME

#include<iostream>
using namespace std;
int main(){
    int T,N,i,ans;

    cin >> T;

    for(i=0; i<T; i++){
        cin >> N;
        ans = (N*60)/20;
        cout << ans << endl;
    }
    
    return 0;
}