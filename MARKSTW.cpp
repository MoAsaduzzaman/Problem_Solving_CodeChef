//Problem name: MARKSTW
//https://www.codechef.com/problems/MARKSTW

#include<iostream>
using namespace std;
int main(){

    int X,Y;

    cin >> X >> Y;

    if(X>=Y*2){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}