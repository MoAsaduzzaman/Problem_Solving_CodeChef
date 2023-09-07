//Problem name: KNGTOR
//https://www.codechef.com/problems/KNGTOR

#include<iostream>
using namespace std;
int main(){
    int T,N,M,i,sum;

    cin >> T;

    for(i=0; i<T; i++){
        cin >> N >> M;
        sum=(N*5)+(M*7);
        cout << sum << endl;
    }

    return 0;
}