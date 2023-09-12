//Problem name: TODOLIST
//https://www.codechef.com/problems/TODOLIST

#include<iostream>
using namespace std;
int main(){

    int T;

    cin >> T;

    while(T--){

        int N,i,cnt=0;
        cin >> N;
        int D[N];

        for(i=0; i<N; i++){
            cin >> D[i];
            if(D[i]>=1000){
                cnt++;
            }

        }

        cout << cnt << endl;

    }

    return 0;
}