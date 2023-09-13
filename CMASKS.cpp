//Problem name: CMASKS
//https://www.codechef.com/problems/CMASKS

#include<bits/stdc++.h>
using namespace std;
int main(){

    int T,X,Y;
    cin >> T;

    while(T--){
        cin >> X >> Y;
        if((X*100) < (Y*10)){
            cout << "Disposable" << endl;
        }else{
            cout << "Cloth" << endl;
        }
    }

    return 0;
}