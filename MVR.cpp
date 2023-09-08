//Problem name: MVR
//https://www.codechef.com/problems/MVR

#include<iostream>
using namespace std;
int main(){
    int A,B,X,Y,M,R;

    cin >> A >> B >> X >> Y;

    M = (A*2)+(B*1);
    R = (X*2)+(Y*1);

    if(M==R){
        cout << "Equal" << endl;
    }
    if(M>R){
        cout << "Messi" << endl;
    }
    if(M<R){
        cout  << "Ronaldo" << endl;
    }

    return 0;
}