//Problem name: HOTCOLD
//https://www.codechef.com/problems/HOTCOLD

#include<iostream>
using namespace std;
int  main(){

    int T,C;

    cin >> T;

    while(T--){

        cin >> C;

        if(C>20){
            cout << "HOT" << endl;
        }else{
            cout << "COLD" << endl;
        }

    }

    return 0;
}