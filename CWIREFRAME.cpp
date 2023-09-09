//Problem name: CWIREFRAME
//https://www.codechef.com/problems/CWIREFRAME

#include<iostream>
using namespace std;
int main(){

    int T,N,M,X,ans;

    cin >> T;

    while(T--){

        cin >> N >> M >> X;

        ans = ((2*N)+(2*M))*X;

        cout << ans << endl;

    }

    return 0;
}