//Problem name: ENSPACE
//https://www.codechef.com/problems/ENSPACE

#include<iostream>
using namespace std;
int main(){
    int T,N,X,Y,i,block;

    cin >> T;

    for(i=0; i<T; i++){
        cin >> N >> X >> Y;
        block = (X*1) + (Y*2);

        if(block<=N){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }

    }

    return 0;
}