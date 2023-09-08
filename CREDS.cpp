//Problem name: CREDS
//https://www.codechef.com/problems/CREDS

#include<iostream>
using namespace std;
int main(){
    int T,X,Y,Z,i,credit;

    cin >> T;

    for(i=0; i<T; i++){
        cin >> X >> Y >> Z;
        credit = (X*4)+(Y*2);
        cout << credit << endl;
    }

    return 0;
}