//Problem name: APPLORANGE
//https://www.codechef.com/problems/APPLORNG

#include<iostream>
using namespace std;
int main(){

    int X,A,B;

    cin >> X;
    cin >> A >> B;

    if(X>=(A+B)){
        cout << "YES" << endl;
    }else{
        cout << "NO" <<endl;
    }

    return 0;
}