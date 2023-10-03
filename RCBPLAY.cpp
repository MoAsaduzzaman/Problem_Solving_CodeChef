//Problem name: RCBPLAY
//https://www.codechef.com/problems/RCBPLAY

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T,X,Y,Z;
    cin >> T;
    while(T--){
        cin >> X >> Y >> Z;
        int req_points = Y-X;

        if((Z*2)>=req_points){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}