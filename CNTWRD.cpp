//Problem name: CNTWRD
//https://www.codechef.com/problems/CNTWRD

#include<iostream>
using namespace std;
int main(){
    int T,N,M,i,ttl_word;

    cin >> T;

    for(i=0; i<T; i++){
        cin >> N >> M;
        ttl_word = N*M;
        cout << ttl_word << endl;
    }

    return 0;
}