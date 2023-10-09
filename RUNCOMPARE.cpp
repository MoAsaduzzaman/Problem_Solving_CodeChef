//Problem name: RUNCOMPARE
//https://www.codechef.com/problems/RUNCOMPARE

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        int cnt = 0;
        int N;
        cin >> N;

        vector <int> A(N);
        vector <int> B(N);

        for(int i=0; i<N; i++){
            cin >> A[i];
        }

        for(int i=0; i<N; i++){
            cin >> B[i];
        }

        for(int i=0; i<N; i++){
            if(A[i]>B[i]){
                if((B[i]*2)>=A[i]){
                    cnt+=1;
                }
            }else if(A[i]<B[i]){
                if((A[i]*2)>=B[i]){
                    cnt+=1;
                }
            }else if(A[i]==B[i]){
                cnt+=1;
            }
        }

        cout << cnt << endl;
    }

    return 0;
}