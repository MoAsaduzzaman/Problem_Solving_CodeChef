//Problem name: CHAIRS_
//https://www.codechef.com/problems/CHAIRS_

#include<iostream>
using namespace std;
int main(){
    int T,X,Y,i,cr_nd,x=0;

    cin >> T;

    for(i=0; i<T; i++){
        cin >> X >> Y;
        if(X==Y){
            cr_nd = (X-Y);
            cout << cr_nd << endl;
        }
        if(X>Y){
            cr_nd = (X-Y);
            cout << cr_nd << endl;
        }
        if(X<Y){
            cout << x << endl;
        }
    }

    return 0;
}