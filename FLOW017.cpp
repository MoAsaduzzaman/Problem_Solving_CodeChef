//Problem name: FLOW017
//https://www.codechef.com/problems/FLOW017

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        int A[3];
        for(int i=0; i<3; i++){
            cin >> A[i];
        }
        sort(A,A+3);
        cout << A[1] << endl;
    }
    return 0;
}