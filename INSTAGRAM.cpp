//Problem name: INSTAGRAM
//https://www.codechef.com/problems/INSTAGRAM

#include<iostream>
using namespace std;
int main(){

    int T,X,Y,ans;

    cin >> T;

    while(T--){

        cin >> X >> Y;

        if(X>(Y*10)){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
        
    }

    return 0;
}