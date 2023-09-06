//Problem name: IPLTRSH
//https://www.codechef.com/problems/IPLTRSH

#include<iostream>
using namespace std;
int main(){
    int T,N,M,i,a=0;

    cin >> T;

    for(i=0; i<T; i++){
        cin >> N >> M;
        if(N==M || N<M){
            cout << a << endl;
        }else{
            cout << N-M <<endl;
        }
    }

    return 0;
}
