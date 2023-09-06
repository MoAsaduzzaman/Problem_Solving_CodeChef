//Problem name: BURGERS
//https://www.codechef.com/problems/BURGERS

#include<iostream>
using namespace std;
int main(){
    int T,A,B,i;

    cin >> T;

    for(i=0; i<T; i++){
        cin >> A >> B;
        if(A==B){
            cout << A << endl;
        }else if(A>B){
            cout << B << endl;
        }else{
            cout << A << endl;
        }
    }

    return 0;
}
