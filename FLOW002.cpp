//Problem name: FLOW002
//https://www.codechef.com/problems/FLOW002

#include<iostream>
using namespace std;
int main(){

    int T,A,B;

    cin >> T;

    while(T--){

        cin >> A >> B;
        cout << A%B << endl;

    }

    return 0;
}