//Problem name: KITCHENTIME
//https://www.codechef.com/problems/KITCHENTIME

#include<iostream>
using namespace std;
int main(){
    int T,X,Y,i,a;

    cin >> T;

    for(i=0; i<T; i++){
        cin >> X >> Y;
        a=Y-X;
        cout << a << endl;
    }

    return 0;
}