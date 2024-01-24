// Problem name: IED 
// https://www.codechef.com/START118D/problems/IED

#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll asad(){
    ll A,B,C;
    cin >> A >> B >> C;

    ll ans1 = A*C;
    ll ans2 = B*C;

    if(ans1>=ans2) return ans1;
    else return ans2;
}

int main(){
    cout << asad() << endl;
    return 0;
}