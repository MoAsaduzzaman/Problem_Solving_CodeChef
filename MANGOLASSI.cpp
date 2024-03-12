// Problem name: MANGOLASSI 
// https://www.codechef.com/problems/MANGOLASSI

#include<bits/stdc++.h>
using namespace std;
#define ll long long

string asad(ll X){
    if(X>35) return "YES";
    else return "NO";
}

int main(){
    ll X;
    cin >> X;
    cout << asad(X) << endl;
    return 0;
}