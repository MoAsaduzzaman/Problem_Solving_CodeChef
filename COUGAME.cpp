//Problem name: COUGAME
//https://www.codechef.com/problems/COUGAME

#include<iostream>
using namespace std;
int main(){
    int T,G,B,i;

    cin >> T;

    for(i=0; i<T; i++){
        cin >> G >> B;
        cout << B-G << endl;
    }

    return 0;
}