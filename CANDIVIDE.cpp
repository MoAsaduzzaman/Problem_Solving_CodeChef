//Problem name: CANDIVIDE
//https://www.codechef.com/problems/CANDIVIDE

#include<iostream>
using namespace std;
int main(){
    int T,N,i;

    cin >> T;

    for(i=0; i<T; i++){
        cin >> N;
        if(N%3==0){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

    return 0;
}