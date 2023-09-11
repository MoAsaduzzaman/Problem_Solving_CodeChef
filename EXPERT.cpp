//Problem name: EXPERT
//https://www.codechef.com/problems/EXPERT

#include<iostream>
using namespace std;
int main(){

    double T,X,Y,ans;

    cin >> T;

    while(T--){

        cin >> X >> Y;

        ans = (X*50)/100;

        if(ans<=Y){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
         }

    }

    return 0;
}