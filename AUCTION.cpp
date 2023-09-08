//Problem name: AUCTION
//https://www.codechef.com/problems/AUCTION

#include<iostream>
using namespace std;
int main(){
    int T,A,B,C,i;

    cin >> T;

    for(i=0; i<T; i++){
        cin >> A >> B >> C;
        if(A>B && A>C){
            cout << "Alice" << endl;
        }
        if(B>A && B>C){
            cout << "Bob" << endl;
        }
        if(C>A && C>B){
            cout << "Charlie" << endl;
        }
    }

    return 0;
}