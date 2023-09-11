//Problem name: JOHNY
//https://www.codechef.com/problems/JOHNY

#include<iostream>
#include<algorithm>
using namespace std;
int main(){

    int T;

    cin >> T;

    while(T--){

        int N,K;
        cin >> N;

        int A[N];

            for(int i=0; i<N; i++){
                cin >> A[i];
            }

            cin >> K;
            int a = A[K-1];
            sort(A,A+N);

            for(int i=0; i<N; i++){
                if(A[i]==a){
                    cout << i+1 << endl;
                    break;
                }
            }

    }

    return 0;
}