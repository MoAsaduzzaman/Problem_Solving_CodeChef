//Problem name: CABS
//https://www.codechef.com/problems/CABS

#include<iostream>
using namespace std;
int main(){

    int T,X,Y;

    cin >> T;

    while(T--){
        
        cin >> X >> Y;

        if(X<Y){
            cout << "FIRST" << endl;
        }
        if(X>Y){
            cout << "SECOND" << endl;
        }
        if(X==Y){
            cout << "ANY" << endl;
        }

    }

    return 0;
}