// Problem name: LITRATE 
// https://www.codechef.com/START118D/problems/LITRATE

#include<bits/stdc++.h>
using namespace std;
#define ll long long

string asad(ll L, ll P){
    ll ans = 100*P/L;
    if(ans>=75) return "YES";
    else return "NO";
}

int main(){
    ll T;
    cin >> T;
    while(T){
        ll L,P;
        cin >> L >> P;
        cout << asad(L,P) << endl;
        T--;
    }
    return 0;
}