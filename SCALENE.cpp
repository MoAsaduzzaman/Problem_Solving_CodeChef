//Problem name: SCALENE
//https://www.codechef.com/problems/SCALENE

#include<iostream>
using namespace std;
int main(){

    int T,A,B,C;

    cin >> T;

    while(T--){

        cin >> A >> B >> C;

        if(A!=B && A!=C && B!=C){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }

    }

    return 0;
}