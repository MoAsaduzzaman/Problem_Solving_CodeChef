//Problem name: FAVOURITENUM
//https://www.codechef.com/problems/FAVOURITENUM

#include<iostream>
using namespace std;
int main(){

    int T,A;

    cin >> T;

    while(T--){

        cin >> A;

        if(A%7==0 && A%2==0){
            cout << "Alice" << endl;
        }else if(A%9==0 && A%2==1){
            cout << "Bob" << endl;
        }else{
            cout << "Charlie" << endl;
        }

    }

    return 0;
}