//Problem name: FOODPLAN
//https://www.codechef.com/problems/FOODPLAN

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        float N,M;
        cin >> N >> M;
        float ans = 0.9*N;
        if(ans==M){
            cout << "EITHER" << endl;
        }else if(ans<M){
            cout << "ONLINE" << endl;
        }else if(ans>M){
            cout << "DINING" << endl;
        }
    }
    return 0;
}