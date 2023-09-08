//Problem name: M1ENROL
//https://www.codechef.com/problems/M1ENROL

#include<iostream>
using namespace std;
int main(){
    int T,X,Y,i,a=0;

    cin >> T;

    for(i=0; i<T; i++){
        cin >> X >> Y;

        if(X>=Y){
            cout << a << endl;
        }else{
            cout << Y-X << endl;
        }
    }

    return 0;
}