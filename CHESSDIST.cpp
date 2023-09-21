//Problem name: CHESSDIST
//https://www.codechef.com/problems/CHESSDIST

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T,X1,Y1,X2,Y2;
    cin >> T;
    while(T--){
        cin >> X1 >> Y1 >> X2 >> Y2;
        int xsum = abs(X1-X2);
        int ysum = abs(Y1-Y2);
        if(xsum>=ysum){
            cout << xsum << endl;
        }else{
            cout << ysum << endl;
        }
    }
    return 0;
}