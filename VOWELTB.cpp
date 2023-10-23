//Problem name: VOWELTB
//https://www.codechef.com/problems/VOWELTB

#include<bits/stdc++.h>
using namespace std;

void solve(){
    char C;
    cin >> C;

    if(C=='A' || C=='E' || C=='I' || C=='O' || C=='U'){
        cout << "Vowel" << endl;
    }else{
        cout << "Consonant" << endl;
    }
}

int main(){
    solve();
    return 0;
}