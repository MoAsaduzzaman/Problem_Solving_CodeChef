//problem name: BIRYANI
//https://www.codechef.com/problems/BIRYANI

#include<iostream>
using namespace std;
int main(){
    int T,X,Y,i,mul;

    cin >> T;

    for(i=0; i<T; i++){
        cin >> X >> Y;
        mul=X*Y;
        cout << mul << endl;
    }
    
    return 0;
}