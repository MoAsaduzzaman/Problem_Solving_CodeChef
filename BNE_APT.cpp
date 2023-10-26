//Problem name: BNE_APT
//https://www.codechef.com/START105D/problems/BNE_APT

#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,M,X,Y;
    cin >> N >> M >> X >> Y;

    int ans = (N*X)+(M*Y);
    cout << ans << endl;

    return 0;
}