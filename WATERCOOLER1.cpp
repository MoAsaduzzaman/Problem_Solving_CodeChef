//Problem no: WATERCOOLER1
//https://www.codechef.com/problems/WATERCOOLER1

#include<iostream>
using namespace std;
int main(){

    int T,X,M,Y;

    cin >> T;

    while(T--){

        cin >> X >> M >> Y;

        if(X*Y<M){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }

    }

    return 0;
}