//Problem no: REACHTARGET
//https://www.codechef.com/problems/REACHTARGET

#include<iostream>
using namespace std;
int main(){
    int T,X,Y,i,dif;

    cin >> T;

    for(i=0; i<T; i++){
        cin >> X >> Y;
        dif=X-Y;
        cout << dif << endl;
    }

    return 0;
}