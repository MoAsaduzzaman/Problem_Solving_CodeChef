//Problem name: AUDIBLE
//https://www.codechef.com/problems/AUDIBLE

#include<iostream>
using namespace std;
int main(){
    int T,X,i;

    cin >> T;

    for(i=0; i<T; i++){
        cin >> X;

        if(X>=67 && X<=45000){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

    return 0;
}