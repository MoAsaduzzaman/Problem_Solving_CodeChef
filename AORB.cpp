//Problem name: AORB
//https://www.codechef.com/problems/AORB

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T,X,Y;
    cin >> T;
    while(T--){
        int ans1,ans2;
        cin >> X >> Y;
        ans1 = (500-(X*2))+(1000-((X+Y)*4));
        ans2 = (1000-(Y*4))+(500-((X+Y)*2));
        cout << max(ans1,ans2) << endl;
    }
    return 0;
}