//Problem name: FARFROMO
//https://www.codechef.com/problems/FARFROMO

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    double X1,Y1,X2,Y2;
    cin >> T;
    while(T--){
        cin >> X1 >> Y1 >> X2 >> Y2;

        double distance1 = sqrt(X1*X1 + Y1*Y1);
        double distance2 = sqrt(X2*X2 + Y2*Y2);

        if(distance1>distance2){
            cout << "ALEX" << endl;
        }else if(distance1<distance2){
            cout << "BOB" << endl;
        }else if(distance1==distance2){
            cout << "EQUAL" << endl;
        }
    }
    return 0;
}