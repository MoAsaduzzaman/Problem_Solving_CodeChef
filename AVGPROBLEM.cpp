//Problem name: AVGPROBLEM
//https://www.codechef.com/problems/AVGPROBLEM

#include<iostream>
using namespace std;
int main(){

    int T;
    double A,B,C;

    cin >> T;

    while (T--){

        cin >> A >> B >> C;

        if((A+B)/2>C){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }

    }

    return 0;
}