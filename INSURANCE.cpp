//Problem name: INSURANCE
//https://www.codechef.com/problems/INSURANCE

#include<iostream>
using namespace std;
int main(){

    int T,X,Y;

    cin >> T;

    while(T--){

        cin >> X >> Y;

        if(X>=Y){
            cout << Y << endl;
        }else{
            cout << X << endl;
        }

    }

    return 0;
}