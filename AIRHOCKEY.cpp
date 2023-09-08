//Problem name: AIRHOCKEY
//https://www.codechef.com/problems/AIRHOCKEY

#include<iostream>
using namespace std;
int main(){

    int T,A,B;

    cin >> T;

    while(T--){

        cin >> A >> B;

        if(A>=B){
            cout << 7-A << endl;
        }
        if(A<B){
            cout << 7-B << endl;
        }
    }

    return 0;
}