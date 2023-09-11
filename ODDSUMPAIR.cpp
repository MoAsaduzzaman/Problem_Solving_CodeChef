//Problem name: ODDSUMPAIR
//https://www.codechef.com/problems/ODDSUMPAIR

#include<iostream>
using namespace std;
int main(){

    int T,A,B,C;

    cin >> T;

    while(T--){

        cin >> A >> B >> C;

        if((A+B)%2==1 || (A+C)%2==1 || (B+C)%2==1){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }

    }

    return 0;
}