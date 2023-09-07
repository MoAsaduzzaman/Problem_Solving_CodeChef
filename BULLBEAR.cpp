//Problem name: BULLBEAR;
//https://www.codechef.com/problems/BULLBEAR

#include<iostream>
using namespace std;
int main(){
    int T,X,Y,i;

    cin >> T;

    for(i=0; i<T; i++){
        cin >> X >> Y;

        if(X>Y){
            cout << "LOSS" << endl;
        }else if(X<Y){
            cout << "PROFIT" << endl;
        }else{
            cout << "NEUTRAL" << endl;
        }
    }

    return 0;
}