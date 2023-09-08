//Problem name: NEWCC.cpp
//https://www.codechef.com/problems/NEWCC

#include<iostream>
using namespace std;
int main(){

    int X,Y;

    cin >> X >> Y;

    if(X==Y){
        cout << "Same" << endl;
    }
    if(X>Y){
        cout << "New" << endl;
    }
    if(X<Y){
        cout << "Old" << endl;
    }

    return 0;
}