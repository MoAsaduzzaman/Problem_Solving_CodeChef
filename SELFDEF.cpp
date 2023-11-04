//Problem name: SELFDEF 
//https://www.codechef.com/problems/SELFDEF

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;

        vector <int> A(N);

        int count = 0;

        for(int i=0; i<N; i++){
            cin >> A[i];
            if(A[i]>=10 && A[i]<=60){
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}