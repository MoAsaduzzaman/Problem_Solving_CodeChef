//Problem no: TASTEDEC
//https://www.codechef.com/problems/TASTEDEC

#include<iostream>
using namespace std;
int main(){
    int T,X,Y,i,a1,a2;

    cin >> T;

    for(i=0; i<T; i++){
        cin >> X >> Y;
        a1 = X*2;
        a2 = Y*5;

        if(a1==a2){
            cout << "Either" << endl;
        }
        if(a1>a2){
            cout << "Chocolate" << endl;
        }
        if(a1<a2){
            cout << "Candy" << endl;
        }
    }

    return 0;
}
