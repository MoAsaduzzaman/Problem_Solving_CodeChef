// Problem name: CHOCDISTRIB 
// https://www.codechef.com/problems/CHOCDISTRIB

#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void asad(){
    ll T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        if(N%2==1) cout << (N/2)+1 << " " << N << endl;
        else cout << N / 2 << " " << N << endl;
    }
}

int main(){
    asad();
    return 0;
}