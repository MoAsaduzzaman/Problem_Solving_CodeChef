//Problem name: INTEST
//https://www.codechef.com/problems/INTEST

#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,K,A;
    int cnt = 0;
    cin >> N >> K;
    while(N--){
        cin >> A;
        if(A%K==0){
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}