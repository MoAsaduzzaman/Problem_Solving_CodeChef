//Problem name: LTIME
//https://www.codechef.com/problems/LTIME

#include<iostream>
using namespace std;
int main(){

    int T,X,i;

    cin >> T;

    for(i=0; i<T; i++){
        cin >> X;

        if(X>=1 && X<=4){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

    return 0;
}