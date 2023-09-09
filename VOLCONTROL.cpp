//Problem name: VOLCONTROL
//https://www.codechef.com/problems/VOLCONTROL

#include<iostream>
using namespace std;
int main(){

    int T,X,Y;

    cin >> T;

    while(T--){

        cin >> X >> Y;

        if(X>=Y){
            cout << X-Y << endl;
        }
        if(X<Y){
            cout << Y-X << endl;
        }

    }

    return 0;
}