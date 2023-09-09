//Problem name: TYRE
//https://www.codechef.com/problems/TYRE

#include<iostream>
using namespace std;
int main(){

    int T,N,M,ans;

    cin >> T;

    while(T--){

        cin >> N >> M;
        ans = (N*2)+(M*4);
        cout << ans << endl;

    }

    return 0;
}