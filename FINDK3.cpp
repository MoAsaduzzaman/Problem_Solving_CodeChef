//Problem name: FINDK3
//https://www.codechef.com/problems/FINDK3

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T,X,Y,Z;
    cin >> T;
    while(T--){
        cin >> X >> Y >> Z;

        if((X*Y)%Z==0){
            cout << X*Y << " " << Z << endl;
        }else if((X*Z)%Y==0){
            cout << X*Z << " " << Y << endl;
        }else if((Z*Y)%X==0){
            cout << Z*Y << " " << X << endl;
        }else{
            cout << -1 << endl;
        }
    }

    return 0;
}