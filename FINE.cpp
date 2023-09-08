//Problem name: FINE
//https://www.codechef.com/problems/FINE

#include<iostream>
using namespace std;
int main(){
    int T,X,i,a=0,b=500,c=2000;

    cin >> T;

    for(i=0; i<T; i++){
        cin >> X;
        if(X<=70){
            cout << a << endl;
        }
        if(X>70 && X<=100){
            cout << b << endl;
        }
        if(X>100){
            cout << c << endl;
        }
    }

    return 0;
}