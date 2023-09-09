//Problem name: BUDGET_
//https://www.codechef.com/problems/BUDGET_

#include<iostream>
using namespace std;
int main(){

    int T,X,Y;

    cin >> T;

    while(T--){

        cin >> X >> Y;

        if(X>=(Y*30)){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }

    }

    return 0;
}