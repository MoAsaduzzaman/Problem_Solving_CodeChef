//Problem name: MONOPOLY
//https://www.codechef.com/problems/MONOPOLY

#include<iostream>
using namespace std;
int main(){

    int T,R1,R2,R3;

    cin >> T;

    while(T--){

        cin >> R1 >> R2 >> R3;

        if((R1+R2)<R3 || (R1+R3)<R2 || (R2+R3)<R1){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }

    }

    return 0;
}