// Problem name: HEALSE 
// https://www.codechef.com/START122D/problems/HEALSE

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll H;
    cin >> H;

    if(H<8) cout << "LESS" << endl;
    if(H>8) cout << "MORE" << endl;
    if(H==8) cout << "PERFECT" << endl;
    
    return 0;
}