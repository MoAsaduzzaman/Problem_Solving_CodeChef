//Problem name: FAIRPASS
//https://www.codechef.com/problems/FAIRPASS

#include<iostream>
using namespace std;
int main(){
    int T,N,K,i;

    cin >> T;
    
    for(i=0; i<T; i++){
        cin >> N >> K;
        if(N<K){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

    return 0;
}