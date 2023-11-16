//Problem name: CHESS_PAIR 
//https://www.codechef.com/START108D/problems/CHESS_PAIR

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int n, x;
        cin >> n >> x;

        if(n- x>=0){
            cout << 0 << endl;
        }else{
            cout << abs(x-n)*2 << endl;
        }
    }

    return 0;
}