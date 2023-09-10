//Problem name: CHEAPFOOD
//https://www.codechef.com/problems/CHEAPFOOD

#include<iostream>
using namespace std;
int main(){

    int T,X,dis1,dis2;

    cin >> T;

    while(T--){

        cin >> X;

        dis1 = (X*.10);
        dis2 = 100;

        if(dis1>=dis2){
            cout << dis1 << endl;
        }else{
            cout << dis2 << endl;
        }

    }

    return 0;
}