//Problem name: INVESTMENT
//https://www.codechef.com/problems/INVESTMENT

#include<iostream>
using namespace std;
int main(){

    int T,X,Y,i;

    cin >> T;

    while(T--){

        cin >> X >> Y;
        
        if(X>=Y*2){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

    return 0;
}