//Problem name: INTRDSGN
//https://www.codechef.com/problems/INTRDSGN

#include<iostream>
using namespace std;
int main(){

    int T,X1,Y1,X2,Y2,sum1,sum2;

    cin >> T;

    while(T--){

        cin >> X1 >> Y1 >> X2 >> Y2;

        sum1 = X1 + Y1;
        sum2 = X2 + Y2;

        if(sum1>sum2){
            cout << sum2 << endl;
        }else{
            cout << sum1 << endl;
        }
    }

    return 0;
}
