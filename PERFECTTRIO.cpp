//Problem name: PERFECTTRIO
//https://www.codechef.com/problems/PERFECTTRIO

#include<iostream>
using namespace std;
int main(){

    int T,A,B,C;

    cin >> T;

    while(T--){

        cin >> A >> B >> C;

        if((A+B)==C || (A+C)==B || (B+C)==A){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }

    }

    return 0;
}