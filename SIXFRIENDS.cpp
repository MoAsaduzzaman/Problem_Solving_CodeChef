//Problem name: SIXFRIENDS
//https://www.codechef.com/problems/SIXFRIENDS

#include<iostream>
using namespace std;
int main(){

    int T,X,Y,sum1,sum2;

    cin >> T;

    while(T--){

        cin >> X >> Y;

        sum1 = X*3;
        sum2 = Y*2;

        if(sum1>=sum2){
            cout << sum2 << endl;
        }else{
            cout << sum1 << endl;
        }

    }

    return 0;
}