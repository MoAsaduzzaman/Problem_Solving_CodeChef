//Problem name: PIZZAC
//https://www.codechef.com/START104D/problems/PIZZAC

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
       if (N % 4 == 0 || N == 1 || N % 2 == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}