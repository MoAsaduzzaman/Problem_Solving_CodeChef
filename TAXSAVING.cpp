//Problem name: TAXSAVING
//https://www.codechef.com/problems/TAXSAVING

#include<iostream>
using namespace std;
int main(){
    int T,X,Y,i,dif;

    cin >> T;

    for(i=0; i<T; i++){
        cin >> X >> Y;
        dif=(X-Y);
        cout << dif << endl;
    }

    return 0;
}