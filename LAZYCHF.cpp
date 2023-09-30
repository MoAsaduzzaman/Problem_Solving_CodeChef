//Problem name: LAZYCHF
//https://www.codechef.com/problems/LAZYCHF

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T,x,m,d;
    cin >> T;
    while(T--){
        cin >> x >> m >> d;

        int ans1 = x*m;
        int ans2 = x+d;

        cout << min(ans1,ans2) << endl;
        
    }

    return 0;
}